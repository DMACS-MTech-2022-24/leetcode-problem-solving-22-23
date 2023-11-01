class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(auto it : operations)
        {
            if(it=="C") s.pop();
            else if(it=="D") s.push(s.top()*2);
            else if(it=="+")
            {
                int tmp = s.top();
                s.pop();
                int ins = tmp+s.top();
                s.push(tmp);
                s.push(ins);
            }
            
            else s.push(stoi(it));

            }
            
        
        int res=0;
        while(!s.empty())
        {
            res+=s.top();
            s.pop();
        }
        return res;
    }
    
};