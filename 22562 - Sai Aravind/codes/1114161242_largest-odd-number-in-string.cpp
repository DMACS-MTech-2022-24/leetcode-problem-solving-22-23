class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>-1;--i)        
        {
            if((num[i]&1)==1)
            {
                return num.erase(i+1);
            }
        }
        return "";
    }
};