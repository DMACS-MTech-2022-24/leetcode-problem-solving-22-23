class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c = 0;
        for(int& a: arr){
            if(a & 1){
                c++;
                if(c == 3)
                    return true;
            }else{
                c = 0;
            }
        }
        return false; 
    }
};