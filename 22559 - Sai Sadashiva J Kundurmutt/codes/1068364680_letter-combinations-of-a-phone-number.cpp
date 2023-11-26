class Solution {
public:
    unordered_map<char, vector<char>>mp;
    void init_mp()
    {
        mp['2'] = vector<char>{'a', 'b', 'c'};
        mp['3'] = vector<char>{'d', 'e', 'f'};
        mp['4'] = vector<char>{'g', 'h', 'i'};
        mp['5'] = vector<char>{'j', 'k', 'l'};
        mp['6'] = vector<char>{'m', 'n', 'o'};
        mp['7'] = vector<char>{'p', 'q', 'r', 's'};
        mp['8'] = vector<char>{'t', 'u', 'v'};
        mp['9'] = vector<char>{'w', 'x', 'y', 'z'};
    }
    Solution()
    {
        init_mp();
    }
    vector<string> letterCombinations(string digits) {
        queue<string>combinations;
        int d = 0;
        if(digits.size() == 0)  return vector<string>();
        for(char c: mp[digits[d]]){
            stringstream ss;
            ss << c;
            combinations.push(ss.str());
        }
        d++;

        while(d < digits.size()){
            int n = combinations.size();

            while(n--){
                auto f = combinations.front();
                combinations.pop();
                for(char c: mp[digits[d]]){
                    combinations.push(f + c);

                }
            }
            d++;
        }

        vector<string>ans;
        while(!combinations.empty()){
            ans.push_back(combinations.front());
            combinations.pop();
        }
        return ans;
        
    }
};