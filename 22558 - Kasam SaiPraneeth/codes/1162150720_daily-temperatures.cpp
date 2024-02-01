class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0);
        stack<int> st;
        //solving using stack first push the index and then try finding the next warmer temp, 
        // until it found push the index into stack ,one the warmer temp is found subtract 
        // the index of the i with the stack top index
        for(int i = 0; i < n ; i++){
            while(!st.empty() && temp[st.top()] < temp[i]){
                ans[st.top()] = i -st.top();
                st.pop();
            }
            st.push(i);
        }   
        return ans;
    }
};