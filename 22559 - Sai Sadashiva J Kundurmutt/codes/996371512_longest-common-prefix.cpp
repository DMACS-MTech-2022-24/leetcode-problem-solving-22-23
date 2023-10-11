class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char curr_char_idx = 0;
        string lcp = "";
        while(true){
            char c;
            bool flag = true;
            for(int i = 0; i < strs.size(); i++){
                
                if(i == 0){
                    if(curr_char_idx >= strs[i].size()){
                        return lcp;
                    }else{
                        c = strs[i][curr_char_idx];
                    }


                }else{
                    if(curr_char_idx >= strs[i].size()){
                        return lcp;
                    }else{
                        if(strs[i][curr_char_idx] != c){
                            flag = false;
                            break;
                        }
                    }
                }
            }
            if(flag){
                lcp += c;
            }else{
                return lcp;
            }

            curr_char_idx++;
        }
        return lcp;
    }
};