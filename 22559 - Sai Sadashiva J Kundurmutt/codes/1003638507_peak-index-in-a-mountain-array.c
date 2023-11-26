int peakIndexInMountainArray(int* arr, int arrSize){
    int l, r;
    l = 0; 
    r = arrSize - 1;
    int m;
    while(l < r){
        m = (l + r)/2;

        if(arr[m] < arr[m + 1] && arr[m] > arr[m - 1]){
            l = m;
        }else if(arr[m] > arr[m + 1] && arr[m - 1] > arr[m]){
            r = m;
        }else if(arr[m] > arr[m - 1] && arr[m] > arr[m + 1]){
            break;
        }
    }
    return m;


}