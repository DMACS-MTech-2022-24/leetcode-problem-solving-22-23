class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                
                nums[i] = -1;
                n--;
            }
        }
        
        int i = 0, j = nums.size() - 1;
        while(i <= j){
            if(nums[i] == -1 && nums[j] != -1){
                cout << nums[i] << " " << nums[j] << endl;
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;
            }
            if(nums[i] != -1)
                i++;

            if(nums[j] == -1)
                j--;




        }

        

        return n;
    }
};