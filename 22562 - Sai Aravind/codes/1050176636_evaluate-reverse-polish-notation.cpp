class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> nums;
        for(auto const& tk:tokens)
        {
            try
            {
                nums.push_back(stoi(tk));
            }
            catch (std::invalid_argument const& ex)
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
                    // break;
                    // default:
                    // nums.back()+=(','-tk[0])*a;
                }
            }
        }
        return nums.front();
    }
};