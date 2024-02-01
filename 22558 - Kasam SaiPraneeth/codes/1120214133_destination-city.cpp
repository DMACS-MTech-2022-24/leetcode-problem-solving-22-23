class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        set<string> city;

        for(int i = 0 ; i<n ; i++){
            city.insert(paths[i][0]);
        }

        for(int i = 0 ; i<n ; i++){
            if(city.count(paths[i][1]) == 0)
                return paths[i][1];
        }

        return "";
        
    }
};
