class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        int score1, score2, sum=0;
        for(int i=0; i<operations.size(); i++){
            if(operations[i] == "+"){
                if(!record.empty()){
                    score1 = record.top();
                    record.pop();
                }
                else score1 =0;

                if(!record.empty()){
                    
                    score2 =  record.top();
                    
                    
                }
                else score2 = 0;
                record.push(score1);
                record.push(score1 + score2);
                sum += record.top();
            }
            else if(operations[i] == "D"){
                if(!record.empty()){
                    score1 = 2*record.top();
                    record.push(score1);
                    
                }
                else
                    record.push(0);
                sum += record.top();
            }
            else if(operations[i] == "C"){
                sum -= record.top();
                record.pop();
            }
            else{
                
                record.push(stoi(operations[i]));
                sum += record.top();

            }
             
        }
        
        return sum;
    }
};