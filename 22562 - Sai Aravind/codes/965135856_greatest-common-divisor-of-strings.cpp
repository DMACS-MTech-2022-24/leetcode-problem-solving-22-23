class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int j=0,k=str2.size();
        bool flag=true;
        for(const auto &x:str1)
        {
            if(x==str2[j])
            {
                ++j;
                if(j==k)
                {
                    flag=false;
                    j=0;
                }
            }
            else if(flag and j!=0)
            {
                flag=false;
                k=j;
                j=0;
            }
            else
            {
                return "";
            }
        }
        if(j!=0)
        {
            auto ret=str2.substr(str2.size()-j,j);
            auto ret2=gcdOfStrings(str2,ret);
            // cout<<str2<<" - "<<ret<<" - "<<ret2<<"\n";
            return ret2;
        }
        return str2.substr(0,k);
    }
};