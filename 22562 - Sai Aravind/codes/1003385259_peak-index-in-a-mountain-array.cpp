class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0,j=arr.size()-1;
        while(true)
        {
            auto m=(i+j)/2;
            if(arr[m-1]<arr[m] and arr[m+1]<arr[m])
                return m;
            else if(arr[m-1]<arr[m])
            {
                i=m;
            }
            else
            {
                j=m;
            }
        }
    }
};