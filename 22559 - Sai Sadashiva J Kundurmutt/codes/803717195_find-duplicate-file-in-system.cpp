class Solution {
public:
    void getFields(const string& input, vector<string>& filePaths, vector<string>& contents)
    {
        int i = 0;
        string fileDir = "";
        while(input[i] == ' '){
            i++;
        }
        if(i < input.size() && (input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= '0' && input[i] <= '9') || input[i] == '/' || input[i] == '.' || input[i] == '(' || input[i] == ')'){
            while(i < input.size() && input[i] != ' '){
                fileDir += input[i];
                i++;
            }
        }
        while(i < input.size() && input[i] == ' '){
            i++;
        }
        while(i < input.size()){
            if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= '0' && input[i] <= '9') || input[i] == '/' || input[i] == '.' || input[i] == '(' || input[i] == ')'){
                string fileName = "";
                string content = "";
                while(i < input.size() && input[i] != '('){
                    fileName += input[i];
                    i++;
                }
                filePaths.push_back(fileDir + '/' + fileName);

                if(input[i] == '('){
                    
                    i++;
                    while(i < input.size() && input[i] != ')'){
                        content += input[i];
                        i++;
                    }
                    i++;    
                        
                }
                contents.push_back(content);
                
            }
            while(input[i] == ' ')
                i++;
            
            
        }
        
    }
    vector<vector<string>> findDuplicate(vector<string>& paths) {
           vector<string> fpaths;
           vector<string> conts;
           
           for(int i = 0; i < paths.size(); i++){
               getFields(paths[i], fpaths, conts);
           }
           unordered_map<string, int>a;
           vector<vector<string>>ans1; 
           int curr = 0; 
           for(int i = 0; i < fpaths.size(); i++){
               if(a.find(conts[i]) != a.end()){
                   ans1[a[conts[i]]].push_back(fpaths[i]);
               }else{
                   a[conts[i]] = curr;
                   curr++;
                   
                   ans1.push_back(vector<string>());
                   ans1[a[conts[i]]].push_back(fpaths[i]);
               }
           }
           vector<vector<string>>ans;
           for(auto& vec: ans1){
               if(vec.size() > 1){
                   ans.push_back(vec);
               }
           } 
           
           
            
        return ans;
    }
    
};