class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;
        int n =asteroids.size();
        int flag=0;
        for(int i = 0; i<n ; i++,flag=0){
            if(st.empty() || asteroids[i] > 0){
                st.push(asteroids[i]);
            }
            else{
                while (!st.empty() && st.top() > 0) {
                    int top = st.top();
                    st.pop();
                    // Handle the collision based on absolute values
                    //If both are the same size, both will explode.
                    if (abs(top) == abs(asteroids[i])) {
                        // Both asteroids are destroyed
                        flag=1;
                        break;
                        }
                    else if (abs(top) > abs(asteroids[i])) {
                        st.push(top);
                        break;
                        }
                }
            // If the stack is empty or the current asteroid is larger (in absolute value)
                if (st.empty()|| st.top() < 0) {
                    if(flag==0)
                        st.push(asteroids[i]);
                }
            }
        }

        // transfers the stack elements to the ans vector
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        // reverse's the ans vector to maintain the order
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
