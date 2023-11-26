class Solution {
public:
    string convert(string s, int numRows) {
        map<int,string> map;
        int i=1,itr=0,strln=s.length();
        if(numRows==1) return s;

        while(itr<strln)
        {
            for(;itr<strln&&i<numRows+1;++i,++itr)
            {
                map[i] += s[itr];
                // cout<<i<<" "<<st[itr]<<endl;
            }
            // cout<<i<<endl;
            i-=2;
            for(;itr<strln&&i>0;--i,++itr)
            {
                map[i] += s[itr];
                // cout<<i<<" "<<st[itr]<<endl;
            }
            i+=2;
            // cout<<i<<endl;
            // break;
        }
        string final = "";
        for(i=1;i<=numRows;++i)
            final+=map[i];
        return final;
    }
};