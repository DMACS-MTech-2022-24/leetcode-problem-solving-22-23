class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> vals;
        int ret=0;
        int tmp;
        for(const auto &x:operations)
        {
            switch(x[0])
            {
                case '+':
                tmp=vals.back()+vals[vals.size()-2];
                ret+=tmp;
                vals.push_back(tmp);
                break;
                case 'D':
                tmp=vals.back()<<1;
                ret+=tmp;
                vals.push_back(tmp);
                break;
                case 'C':
                ret-=vals.back();
                vals.pop_back();
                break;
                default:
                tmp=stoi(x);
                ret+=tmp;
                vals.push_back(tmp);
            }
        }
        return ret;
    }
};