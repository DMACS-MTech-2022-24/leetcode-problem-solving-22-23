class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        for(int i = 0; i < asteroids.size(); i++){
            if(ans.size() == 0){
                ans.push_back(asteroids[i]);
            }else if(ans[ans.size() - 1] < 0){
                ans.push_back(asteroids[i]);
            }else{
                if(asteroids[i] >= 0){
                    ans.push_back(asteroids[i]);
                }else{
                    bool ast_dead = false;
                    while(ans.size() > 0 && ans[ans.size() - 1] >= 0){
                        if(ans[ans.size() - 1] < abs(asteroids[i])){
                            ans.pop_back();
                        }else if(ans[ans.size() - 1] == abs(asteroids[i])){
                            ans.pop_back();
                            ast_dead = true;
                            break;
                        }else{
                            ast_dead = true;
                            break;
                        }
                    }
                    if(!ast_dead)
                        ans.push_back(asteroids[i]);
                }
            }
        }
        return ans;   
    }
};