class Solution {
public:
    string decodeString(string s) {
        int num=0;
        vector<pair<int,string>> S={{1,""}};
        cout<<"\n\n"<<s<<"\n\n";
        for(auto const& x:s)
        {
            if(isdigit(x))
            {
                num=num*10+(x-'0');
            }
            else if(x=='[')
            {
                S.push_back({num,""});
                num=0;
            }
            else if(x==']')
            {
                auto [n,str]=S.back();
                S.pop_back();
                auto y=str;
                while(n>1)
                {
                    y+=str;
                    --n;
                }
                S.back().second+=y;
            }
            else
            {
                S.back().second.push_back(x);
            }
        }
        return S.front().second;
    }
};