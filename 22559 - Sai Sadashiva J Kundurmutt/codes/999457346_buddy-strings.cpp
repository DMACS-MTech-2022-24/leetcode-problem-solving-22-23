class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()) return false;

        if(s == goal){
            sort(s.begin(), s.end());
            for(int i = 0; i < s.size() - 1; i++){
                if(s[i] == s[i + 1])
                    return true;
            }
            return false;
        }else{
            char a11 = 0, a12 = 0, a21 = 0, a22 = 0;
            for(int i = 0; i < s.size(); i++){
                if(s[i] != goal[i]){
                    if(a11 == 0){
                        a11 = s[i];
                        a21 = goal[i];
                    }else if(a12 == 0){
                        a12 = s[i];
                        a22 = goal[i];
                    }else{
                        return false;
                    }
                }
            }
            if(a11 == a22 && a21 == a12)
                return true;
            else 
                return false;
        }
        
        
    }
};