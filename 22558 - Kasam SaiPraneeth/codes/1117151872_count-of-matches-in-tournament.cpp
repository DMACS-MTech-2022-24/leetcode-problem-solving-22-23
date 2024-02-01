class Solution {
public:
    int numberOfMatches(int n) {
        int next = 0, count = 0;
        while(n != 1){
            if(n%2 == 0)
                next = n/2;
            else
                next = n/2 + 1;
            count += n/2;
            n = next;
        }
        return count;
    }
}; 
