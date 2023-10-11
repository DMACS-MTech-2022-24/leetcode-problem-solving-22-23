class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> folders;

        for(int i=0; i<logs.size(); i++){
            if(logs[i] == "../"){
                if(!folders.empty()){
                    folders.pop();
                }
                

                
            }
            else if(logs[i] == "./"){
                continue;
            }
            else{
                folders.push(logs[i]);
            }
        }

        return folders.size();

    }
};