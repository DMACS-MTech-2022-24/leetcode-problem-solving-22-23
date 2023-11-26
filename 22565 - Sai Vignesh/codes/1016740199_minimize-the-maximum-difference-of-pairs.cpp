class Solution {
public:

    int countValidPairs(vector<int>& nums, int threshold)
    {
        int i,count=0;
        cout<<threshold<<endl;
        for(i=0;i<nums.size()-1;++i)
        {
            if(nums[i+1] - nums[i] <=threshold)
            {
                ++i;++count;
            }
        }
        // cout<<"count is: "<<count;
        return count;
    }

    int minimizeMax(vector<int>& nums, int p) {
        vector<int> sorted = {};
        sort(nums.begin(),nums.end());
        int n = nums.size()-1,left=0,right=nums[n] - nums[0],mid; 
        // cout<<"right = "<<right;  
        while(left<right)
        {
            mid = left + (right-left)/2;
            if(countValidPairs(nums,mid)>=p)  right = mid;
            else left = mid+1;
            cout<<mid<<" "<<left<<" "<<right<<endl;
        }

        return left;
        // auto it = min_element(nums.begin(),nums.end());
        // for(it;it!=nums.end();++it)
        //     cout<<*it;
        // return 1;
    }
};