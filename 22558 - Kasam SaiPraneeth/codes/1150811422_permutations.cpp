class Solution {
public:
    void set(vector<int>& nums, vector<int>& tmp, int a,
             vector<vector<int>>& result, vector<bool>& seen) {
        // to avoid subset ,and insert only the permutations
        if (nums.size() == tmp.size()) {
            result.push_back(tmp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            //checking if the element is already seen,
            if (seen[i] == false) {
                // if not seen then make that element true and push the element to the tmp
                seen[i] = true;
                tmp.push_back(nums[i]);
                // recursive call
                set(nums, tmp, i + 1, result, seen);
                // remove the last element in the tmp to avoid the repeation of the same element
                tmp.pop_back();
                // then make the seen of the element to false
                seen[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> result;
        vector<int> tmp;
        // creating a vector of size n with bool values of false
        vector<bool> seen(n, false);

        set(nums, tmp, 0, result, seen);

        return result;
        }
};