class Solution {
public:
    string removeStars(string s) {
        ios_base::sync_with_stdio(false);
        stack<char> st;
        if(s[0]!='*')st.push(s[0]);
        int i=1;
        while(i<s.length()){
            if(st.empty() ){
                if(s[i]!='*')st.push(s[i]);
            }
            else if(s[i]!='*')st.push(s[i]);
            else st.pop();
            i++;
        }
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};