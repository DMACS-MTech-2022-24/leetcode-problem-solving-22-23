class Solution {
public:

    // void checkNumber(string s, int ln)
    // {

    // }

    void helper(string s, vector<string>&ans, int reqNos, int dotPos){
        
        if(reqNos==1 && (s.length()-dotPos)<=3){
            // check if number is <255
            string sub = s.substr(dotPos);
            // cout<<sub<<endl;
            if(s[dotPos]=='0' && (s.length()-dotPos)>1) return;
            if(stoi(sub)>255) return;
            ans.push_back(s);
            return;
        }
        if((s.length()-dotPos)<reqNos) return;
        
        for(int i=dotPos+1,j=1;i<s.length() && j<4;++i,++j)
        {
            string t = s;
            string sub = t.substr(dotPos,j);
            if(stoi(sub)>255) continue;
            t.insert(i,".");
            cout<<t<<" "<<reqNos<<endl;
            if(i-dotPos>1 && t[dotPos]=='0') continue;
            // cout<<"substr : "<<sub<<endl;
            helper(t,ans,reqNos-1,i+1);
        } 
       
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        if(s.length()<4) return ans;
        helper(s,ans,4,0);

    //     for(int i=0;i<3;++i)
    //     {
    //         string t = s;
    //         t.insert(i+1,".");cout<<"from main : "<<t<<endl;
    //         if(i-dotPos>1 && t[dotPos]=='0') continue;
    //         helper(t,ans,3,i+2);     // dotPos indexing is from 1..n not 0..n-1
    //     }
        return ans;
    }
};