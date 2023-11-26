class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> list; // creating vecotr
        for(int i =0; i<nums.size(); i+=2){ //i =i+2 evry time 
            int freq = nums[i]; //num[i] give the freq of the value
            int val = nums[i+1]; // nums[i+1] gives the value
            while(freq -- > 0) //while freq is not 0
                list.push_back(val); // value is pushed back in the vector
        }
        return list; // at the end returnt the vector list with val
    }
};