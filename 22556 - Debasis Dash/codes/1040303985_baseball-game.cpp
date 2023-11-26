class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        int score1, score2;
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
            }
            else if(operations[i] == "D"){
                if(!record.empty()){
                    score1 = 2*record.top();
                    record.push(score1);
                    cout<<record.top() << endl;
                }
                else
                    record.push(0);
            }
            else if(operations[i] == "C"){
                record.pop();
            }
            else{
                score1 = stoi(operations[i]);
                record.push(score1);

            }
             
        }
        score1 = 0;
        while(!record.empty()){
            score1 += record.top();
            // cout << record.top() << endl;
            record.pop();
        }

        return score1;
    }
};