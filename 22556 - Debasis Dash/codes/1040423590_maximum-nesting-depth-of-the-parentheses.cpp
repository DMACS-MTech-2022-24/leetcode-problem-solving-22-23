class Solution {
public:
    int maxDepth(string s) {
        stack<char> bracs;
        int cnt=0, depth=0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                bracs.push(s[i]);
                cnt++;
            }
                
            else if(s[i] == ')'){
                bracs.pop();
                cnt = bracs.size();
            }
            if(depth<cnt){
                depth=cnt;
            }
            
        
        }
        return depth;
    }
};