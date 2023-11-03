class Solution {
public:

    void f(vector<string>& ans, vector<char>&st, int pos, int n, int val)
    {

        if(n == 0){
            string t = "";
            int i;
            for(i = 0; i <= pos; i++){
                t += st[i];
            }
            int ct = 0;
            for(int j = (pos); j >= 0; j--){
                if(st[j] == '(' && ct == 0)
                    t += ")";
                else if(st[j] == '(' && ct > 0)
                    ct--;
                else
                    ct++;
            }
            // cout << "flag " << t << endl;
            
            ans.push_back(t);
            return;
        }

        

        
            st[pos + 1] = '(';
            f(ans, st, (pos + 1), n - 1, val + 1);
            if(val > 0){
                st[pos + 1] = ')';
                f(ans, st, (pos + 1), n, val - 1);
            }
        
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        vector<char>st(n * 2);
        st[0] = '(';
        f(ans, st, 0, (n - 1), 1);
        return ans;
    }
};