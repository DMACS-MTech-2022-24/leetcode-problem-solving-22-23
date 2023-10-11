class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // this is solution is O(N)
        int n = arr.size()/2;//going to the middle of the arrary and checking the conditions
        while(n>=0){
            if(arr[n] > arr[n+1]){ //if right is not greather then increase the n
                if(arr[n-1] < arr[n]) //if right and left both satifies the condition
                    return n; //return n;
                else
                    n = n-1; // are else decrement the n by 1
            }
            else
                n = n+1; // are else increment the n by 1
        }
     return n; // return the index n
    }
};