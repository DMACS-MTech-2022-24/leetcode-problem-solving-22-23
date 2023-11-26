class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int c=0;
        for(auto i:hours){
            if(i>=target) ++c;
        }
        return c;
    }
};