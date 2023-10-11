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
            else
            {
                auto a=nums.back();;
                nums.pop_back();
                switch(tk[0])
                {
                    case '+':
                    nums.back()+=a;
                    break;
                    case '-':
                    nums.back()-=a;
                    break;
                    case '*':
                    nums.back()*=a;
                    break;
                    case '/':
                    nums.back()/=a;
                }
            }
        }
        return nums.front();
    }
};