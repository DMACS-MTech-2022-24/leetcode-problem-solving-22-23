class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = nums.begin();
        cout << (it== (nums.end() - 1)) << endl;
        while(it != (nums.end() - 1)){
            
            auto next = (it + 1);
            cout << *it << " " << *next << endl;
            if(*it == *next){
                nums.erase(next);
            }else{
                it++;
            }
                
            
        }
        return nums.size();
        
    }
};