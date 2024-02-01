class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minn = INT_MAX, secondmin = INT_MAX;

        for(int i =0 ; i<prices.size() ; i++){
            if(prices[i]<minn){
                secondmin=minn;
                minn = prices[i];
            }
            else if(prices[i]<secondmin){
                secondmin = prices[i];
            }
        }
        
        if((secondmin + minn) > money)
            return money;
        else
            return money - secondmin - minn;

    }
};