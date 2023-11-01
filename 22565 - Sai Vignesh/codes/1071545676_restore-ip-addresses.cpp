class Solution {
public:

    bool checkNumber(string sub, string s, int len, int zeroPos)
    {
        if(s[zeroPos] == '0' && len>1) return true;
        if(stoi(sub)>255) return true;   // check if number is < 255
        return false;
    }

    void helper(string s, vector<string>&ans, int reqNos, int dotPos){
        
        if(reqNos==1 && (s.length()-dotPos)<=3){
            string sub = s.substr(dotPos);
            if (checkNumber(sub,s,(s.length()-dotPos),dotPos)) return;
            ans.push_back(s);
            return;
        }
        // if((s.length()-dotPos)<reqNos) return;      // if I need N nos and only <N nos available, we can't get IP
        
        for(int i=dotPos+1,j=1;i<s.length() && j<4;++i,++j)
        {
            string sub = s.substr(dotPos,j);
            string t = s;
            t.insert(i,".");
            if(checkNumber(sub,t,(i-dotPos),dotPos)) continue;
            helper(t,ans,reqNos-1,i+1);
        } 
       
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        // if(s.length()<4) return ans;
        helper(s,ans,4,0);

        return ans;
    }
};