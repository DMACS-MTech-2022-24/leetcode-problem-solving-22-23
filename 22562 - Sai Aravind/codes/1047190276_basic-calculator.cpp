class Solution {
public:
    void apply_op(vector<int> &nums,string &ops)
    {
        auto tp=ops.back();
        if(tp=='_')
        {
            nums.back()*=-1;
        }
        else
        {
            auto a=nums.back();
            nums.pop_back();
            nums.back()= nums.back() + (','-tp) * a;
        }
    }
    int calculate(string s) {
        const regex re("\\d+|\\+|\\-|\\(|\\)");
        auto words_begin = sregex_iterator(s.begin(), s.end(), re);
        auto words_end = sregex_iterator();
        vector<int> nums;
        bool prv_brace=true;
        string ops;
        for (sregex_iterator i = words_begin; i != words_end; ++i) {
            const string str=i->str();
            if(isdigit(str.front()))
            {
                nums.push_back(stoi(str));
            }
            else if(str.front()=='-' and prv_brace)
            {
                ops.push_back('_');
            }
            else if(str.front()==')')
            {
                while(ops.back()!='(')
                {
                    apply_op(nums,ops);
                    ops.pop_back();
                }
                ops.pop_back();
            }
            else if(str.front()=='(' or ops.empty() or ops.back()=='(')
            {
                ops.push_back(str.front());
            }
            else
            {
                apply_op(nums,ops);
                ops.back()=str.front();
            }
            prv_brace=(str.front()=='(');
        }
        while(not ops.empty())
        {
            apply_op(nums,ops);
            ops.pop_back();
        }
        return nums.front();
    }
};