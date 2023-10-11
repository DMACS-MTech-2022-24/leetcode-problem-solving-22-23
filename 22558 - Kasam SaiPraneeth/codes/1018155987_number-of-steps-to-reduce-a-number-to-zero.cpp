class Solution {
public:
    int numberOfSteps(int n) {
        int c=0; // for counting the no.of steps
        while(n != 0){ // while the given num is not reduced to the zero goes into the loop
            if(n%2 == 0){ //if num is even
                c++; //increment the count 
                n/=2; //divides the number
            }
            else if(n % 2 != 0){ //else num is odd
                c++;
                n-=1; // then subtract num by 1
            }
        }
    return c;// returns the count
    }
};