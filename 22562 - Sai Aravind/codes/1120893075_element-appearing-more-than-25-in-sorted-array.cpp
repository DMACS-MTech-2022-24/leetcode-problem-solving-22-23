class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int prv=-1,ln=0;
        int n4=arr.size()/4;
        for(const auto &x:arr)
        {
            if(prv!=x)
            {
                ln=1;
                prv=x;
            }
            else
            {
                ++ln;   
            }
            if(ln>n4)
                return x;
        }
        return 0;

    }
};