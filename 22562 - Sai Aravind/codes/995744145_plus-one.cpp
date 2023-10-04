class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(auto it=digits.rbegin();it!=digits.rend();++it)
        {
            if(*it<9)
            {
                ++*it;
                return digits;
            }
            else
            {
                *it=0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;                
    }
};