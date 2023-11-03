class Solution {
public:
    vector<vector<string>>ans;
    vector<string>curr;
    string word;

    bool add_substring(int s, int e, int d)
    {
        string temp = "";
        int N;
        
        for(int i = s; i <= e; i++){
            int K = i - s;
            // cout << K << " " << (N - K - 1) << endl;
            // cout << word[K] << " " << word[N - K - 1] << endl;
           

            temp += word[i];
        }
        N = temp.size();
        // cout << s << " " << e << " " << d << " " << temp << endl;
        for(int i = 0; i < N/2; i++){
            if(temp[i] != temp[N - i - 1]){
                // cout << temp << " not a palindrome" << endl;
                return false;
            }
        }
        curr[d] = temp;
        return true;
    }

    void f(int d, int idx)
    {

        for(int i = idx; i < word.size(); i++){
            if(add_substring(idx, i, d)){

                if((i + 1) == word.size()){
                    // cout << "depth " << d << endl;
                    vector<string>p;
                    for(int j = 0; j <= d; j++){
                        // cout << curr[j] << " ";
                        p.push_back(curr[j]);

                    }
                    // cout << endl;
                    ans.push_back(p);
                }else{
                    f(d + 1, i + 1);
                }
            }
        }
    }
    vector<vector<string>> partition(string s) {
        ans.clear();
        curr.clear();
        curr.resize(s.size());
        word = s;
        f(0, 0);
        return ans;
    }
};