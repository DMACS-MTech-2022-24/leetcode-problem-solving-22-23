class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> nums;
        for(auto const& tk:tokens)
        {
            if(tk.size()>1 or isdigit(tk[0]))
            {
                nums.push_back(stoi(tk));
            }
            else if(tk[0]=='+')
            {
                nums[nums.size()-2]+=nums[nums.size()-1];
                nums.pop_back();
            }
            else if(tk[0]=='-')
            {
                nums[nums.size()-2]-=nums[nums.size()-1];
                nums.pop_back();
            }
            else if(tk[0]=='*')
            {
                nums[nums.size()-2]*=nums[nums.size()-1];
                nums.pop_back();
            }
            else if(tk[0]=='/')
            {
                nums[nums.size()-2]/=nums[nums.size()-1];
                nums.pop_back();
            }
        }
        return nums.front();
    }
};