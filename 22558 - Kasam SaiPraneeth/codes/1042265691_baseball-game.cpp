class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        for(int i=0; i<operations.size(); i++){
            if(!stack.empty() && operations[i] == "D"){
            // adds new score that is the double of the previous score
                stack.push((stack.top()) *2);
            }
            else if(!stack.empty() && operations[i] == "C"){
            //removing previous score
                stack.pop();
            }
            else if(operations[i] == "+"){
                int top1 = stack.top();
                stack.pop();
                int top2 = stack.top();
                stack.push(top1);
                stack.push(top1+top2);
            }
            else{
                //converts string to integer and pushs into the stack
                stack.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        // adds all the numbers in the stack
        while(!stack.empty()){
            sum+=stack.top();
            stack.pop();
        }
        return sum;//returns the total sum
    }
};