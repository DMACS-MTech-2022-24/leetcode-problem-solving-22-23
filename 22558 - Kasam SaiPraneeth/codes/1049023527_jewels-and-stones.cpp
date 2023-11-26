class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        // checking for each stone is a jewels or not
        for(int i =0; i<jewels.size() ; i++){
            for(int j =0; j<stones.size() ; j++){
                if(jewels[i] == stones[j])
                    count++;
                else
                    count +=0;
            }
        }
        return count;
    }
};