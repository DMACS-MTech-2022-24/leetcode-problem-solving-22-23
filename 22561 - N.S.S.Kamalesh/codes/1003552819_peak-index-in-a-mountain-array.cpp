class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0,j=arr.size()-1,k;
        while(i<j){
            k=i+(j-i)/2;
            if(k>0&&arr[k-1]<arr[k]&&k<arr.size()-1&&arr[k]>arr[k+1])
                return k;
            else if(k>0&&arr[k-1]>arr[k])
                j=k-1;
            else i=k+1;
        }
        return i;
    }
};