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
        string prv;
        string ops;
        for (sregex_iterator i = words_begin; i != words_end; ++i) {
            string str=i->str();
            if(isdigit(str.front()))
            {
                nums.push_back(stoi(str));
            }
            else if(str.front()=='-' and (i==words_begin or prv.front()=='('))
            {
                ops.push_back('_');
            }
            else if(str.front()=='(' or (str.front()!=')' and (ops.empty() or ops.back()=='(')))
            {
                ops.push_back(str.front());
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
            else
            {
                apply_op(nums,ops);
                ops.back()=str.front();
            }
            prv=str;
        }
        while(not ops.empty())
        {
            apply_op(nums,ops);
            ops.pop_back();
        }
        return nums.front();
    }
};