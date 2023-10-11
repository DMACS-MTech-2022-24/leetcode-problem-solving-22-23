class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        while(n>1){
            sort(stones.begin(),stones.end());
            if(stones[n-1]==stones[n-2]){
                stones.erase(stones.begin()+n-2,stones.begin()+n);
                n-=2;
            }
            else{
                stones[n-1]-=stones[n-2];
                stones.erase(stones.begin()+n-2);
                --n;
            }
        }
        if(n==1)
            return stones[0];
        return 0;
    }
};