class FoodRatings {
    unordered_map<string,multimap<int,string>> ro_cuisines;
    unordered_map<string,pair<int,multimap<int,string>*>> food_rating;
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();++i)
        {
            auto &C=ro_cuisines[cuisines[i]];
            auto it=C.insert({ratings[i],foods[i]});
            food_rating[foods[i]]={ratings[i],&C};
        }
    }
    
    void changeRating(string food, int newRating) {
        auto &[R,C]=food_rating[food];
        auto rng=C->equal_range(R);
        R=newRating;
        for(auto it=rng.first;it!=rng.second;++it)
        {
            if(it->second==food)
            {
                C->erase(it);
                C->insert({newRating,food});
                
                return;
            }
        }
    }
    
    string highestRated(string cuisine) {
        auto &C=ro_cuisines[cuisine];
        auto it=C.crbegin();
        auto mx=it->first;
        auto s=it->second;
        cout<<s<<" "<<mx<<"\n";
        for(it++;it->first==mx and it!=C.crend();it++)
        {
            if(s>it->second)
                s=it->second;
        }
        return s;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */