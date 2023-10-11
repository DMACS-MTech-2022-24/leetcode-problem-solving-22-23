class Solution{
public:
    int numWaterBottles(int nB, int nE){
        int totalDrinks =0;
        int emptyBottles =0;

        while(nB > 0){
            totalDrinks += nB;//drinks all the full bottles

            emptyBottles +=nB; //collect empty bottles after drinking

            nB =emptyBottles / nE; //exchange empty bottles for full bottles

            emptyBottles %= nE; //calculate remaining empty bottles after exchange
        }
        return totalDrinks;
    }
};