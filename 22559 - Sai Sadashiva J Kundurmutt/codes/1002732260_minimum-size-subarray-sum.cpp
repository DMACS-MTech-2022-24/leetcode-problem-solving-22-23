class Solution {
public:


    int get_min_length_subarray(vector<int>& prefix, int i, int target)
    {

        if(i == 0){
            if(prefix[i] > target){
                return 1;
            }else{
                return INT_MAX;
            }
        }
        int l = 0, r = i - 1;
        int t = prefix[i] - target;
        
        while(l < r){
            int m = (l + r)/2;
            if(prefix[m] >= t){
                r = m;
            }else{
                l = m + 1;
            }
        }
        assert(l == r);
        return (i - l + (prefix[l] != t));


    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        vector<int>prefix_array(n);

        for(int i = 0; i < n; i++){
            if(i == 0){
                prefix_array[i] = nums[i];
            }else{
                prefix_array[i] = prefix_array[i - 1] + nums[i];
            }
            cout << prefix_array[i] << " ";
        }
        cout << endl;

        int min_length = INT_MAX;
        for(int i = 0; i < n; i++){
            if(prefix_array[i] > target){
                int l = get_min_length_subarray(prefix_array, i, target);
                min_length = min(min_length, l);
            }else if(prefix_array[i] == target){
                min_length = min(min_length, i + 1);
            }
        } 
        return (min_length == INT_MAX ? 0: min_length);  
    }
};