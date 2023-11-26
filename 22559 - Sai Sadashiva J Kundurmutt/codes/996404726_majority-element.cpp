#include<bits/stdc++.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
       int thresh = n/2;
       unordered_map<int, int>mp;
       int ans = -1;
       for(int i = 0; i < n; i++){
           if(mp.find(nums[i]) == mp.end()){
               mp[nums[i]] = 1;
               
           }else{
               mp[nums[i]]++;
               
           }
           if(mp[nums[i]] > thresh){
                   ans = nums[i];
            }
       } 
       return ans;
    }
};