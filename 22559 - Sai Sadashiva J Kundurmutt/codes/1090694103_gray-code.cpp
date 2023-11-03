class Solution {
public:
    int N;
    vector<int>ans;
    void f(int curr, int order, int d)
    {
        if(d == 0){
            ans.push_back(curr);
            return;
        }
            
        
        if(order == 0){
            f((curr << 1) + 0, 0, d - 1);
            f((curr << 1) + 1, 1, d - 1);
        }else{
            f((curr << 1) + 1, 0, d - 1);
            f((curr << 1) + 0, 1, d - 1);
        }
    }
    vector<int> grayCode(int n) {
        ans.clear();
        f(0, 0, n);
        return ans;
    }
};