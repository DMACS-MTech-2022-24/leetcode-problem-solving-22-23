class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int left =0 , right = arr.size()-1;
    // this loop untill the left is less then right 
    while(left < right){
        int mid = left + (right-left) /2; //calculating the middle 
        if(arr[mid] < arr[mid+1])//if mid val is less then mid++ the left is incremented by 1
            left = mid+1;
        else
            right = mid; //are else mid is assigned to  right
    }
    return left; //return left
    }
};