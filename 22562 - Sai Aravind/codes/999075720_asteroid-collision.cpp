class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        for(auto it=asteroids.begin()+1;it!=asteroids.end();)
        {
            auto prv=it-1;
            if(it==asteroids.begin() or (*it>0 or *prv<0))
                ++it;
            else
            {
                auto cond=*prv+*it;
                if(cond==0)
                    it=asteroids.erase(prv,it+1);
                else if(cond<0)
                {
                    it=asteroids.erase(prv);
                }
                else
                {
                    it=asteroids.erase(it);
                }
            }
        }
        return asteroids;
    }
};