class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(auto it=digits.rbegin();it!=digits.rend();++it)
        {
            if(*it==9)
            {
                *it=0;
            }   
            else
            {
                ++*it;
                return digits;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;                
    }
};