class Solution {
public:
    int indexDiff;
    int valueDiff;
    
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        this->indexDiff = indexDiff;
        this->valueDiff = valueDiff;

        multiset<int>window;
        int i = 0;
        int n = nums.size();
        while(i < n && i <= indexDiff){
            // cout << nums[i] << endl;
            window.insert(nums[i++]);
        }


        int w1 = 0, w2 = min(n - 1, indexDiff);
        int prev;
        int tmp = 0;
        int minDiff;
        // for(auto it = window.begin(); it != window.end(); it++){
        //     cout << *it << endl;
        // }
        for(int el: window){
            // cout << el << endl;
            if(tmp > 0){
                if(tmp == 1){
                    minDiff = abs(el - prev);
                }else{
                    minDiff = min(abs(el - prev), minDiff);
                }
                if(minDiff <= valueDiff)
                    return true;                
            }
            prev = el;
            tmp++;

        }
        
        while(true){

           window.erase(nums[w1]);
           ++w1;
           if(++w2 < n){
                auto lb = window.lower_bound(nums[w2]);
                // auto ub = window.upper_bound(nums[w2]);
                
                if(lb != window.end() && abs(*lb - nums[w2]) <= valueDiff){
                    return true;
                }
                if(lb != window.begin()){

                    --lb;
                    cout << "Lesser than me " << *lb << endl;
                    if(abs(*lb - nums[w2]) <= valueDiff){
                        return true;
                    }
                }
                
                window.insert(nums[w2]);
               
           }else{
               return false;
           }
            

            
        }

       
    }
};