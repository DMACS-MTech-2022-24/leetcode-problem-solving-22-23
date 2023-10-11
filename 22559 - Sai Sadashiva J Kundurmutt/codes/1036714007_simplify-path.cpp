class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;

        
        int n = path.size();
        string token = "";
        st.push(token);
        for(int i = 0; i < n; i++){
            if(path[i] == '/'){
                cout << "slash\n";
                if(token == ".."){
                    if(st.top() != "")
                        st.pop();
                    
                }else if(token != "."){
                    if(token != "")
                        st.push(token);
                }
                token = "";
            }else{
                token += path[i];
            }
        }
        if(token != ""){
            if(token == ".."){
                if(st.top() != ""){
                    st.pop();
                }
            }else if(token != "."){
                st.push(token);
            }
        }
        string ans = "";
        cout << st.size() << endl;
        if(st.size() == 1)
            return "/";
        while(st.top() != ""){
            cout << st.top() << endl;
            ans = '/' + st.top() + ans;
            cout << ans << endl;
            st.pop();
            
            
        }
        
        return ans;
    }
};