class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size()/2;
        while(n>=0){
            if(arr[n] > arr[n+1]){
                if(arr[n-1] < arr[n])
                    return n;
                else
                    n = n-1;
            }
            else
                n = n+1;
        }
     return n;
    }
};