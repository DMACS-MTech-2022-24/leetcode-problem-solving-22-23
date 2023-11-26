class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s;//creating a vector type string
        for(int i =1; i<=n; i++){
            if( (i%3 == 0) && (i%5 == 0)){ //if i divisible by both 3 and 5
                s.push_back("FizzBuzz"); // add the FizzBuzz for the back in the vector s
            }
            else if( (i%3 == 0)){ // if divisible by 3 
                s.push_back("Fizz"); // Fizz is added
            }
            else if((i%5 == 0)){ //if divisible by 5
                s.push_back("Buzz"); // Buzz is added
            }
            else
                s.push_back(to_string(i)); // orther then above three  is added
        }
        return s; // return the vector s.
    }

};