class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int p=nums.size()/2,tmp=-1;
        while(p>=0&&p<nums.size()){
            if(target==nums[p])return p;
            else if(target<nums[p]){
                if(tmp==1) break;
                --p;
                tmp=0;
            }
            else{
                if(tmp==0) break;
                ++p;
                tmp=1;
            }
        }
        if(p<0) return 0;
        if(p==nums.size()) return p;
        if(target<nums[p]) return p;
        return p+1;
    }
};