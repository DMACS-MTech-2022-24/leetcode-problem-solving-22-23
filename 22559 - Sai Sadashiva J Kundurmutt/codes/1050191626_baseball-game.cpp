class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>stk;

        for(string op: operations){
            if(op == "C"){
                if(!stk.empty())
                    stk.pop();
            }else if(op == "D"){
                if(!stk.empty()){
                    int prevsc = stk.top();
                    stk.push(prevsc*2);
                }
            }else if(op ==  "+"){
                if(stk.size() >= 2){

                    int pr1, pr2;
                    pr1 = stk.top();
                    stk.pop();
                    pr2 = stk.top();
                    stk.pop();
                    stk.push(pr2);
                    stk.push(pr1);
                    stk.push(pr1 + pr2);
                }
            }else{
                stk.push(stoi(op));
            }
        }
        int ans = 0;
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};