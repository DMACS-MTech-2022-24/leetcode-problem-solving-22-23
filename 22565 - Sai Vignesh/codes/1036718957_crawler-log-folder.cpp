class Solution {
public:
    int minOperations(vector<string>& logs) {
        int steps=0;
        for(string s : logs)
        {
            if(s == "./")
            {
                // cout<<steps<<" ";
                continue;
            } 
            if(s == "../")
            {
                if(steps>0) --steps;
                // cout<<steps<<" ";
            } 
            else
            {
              ++steps;  
            //   cout<<steps<<" ";
            } 
        }
        logs.clear();
        return steps;
        
    }
};