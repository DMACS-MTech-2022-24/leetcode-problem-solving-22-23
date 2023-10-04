

int maxProfit(int* prices, int pricesSize){
    int profit =0;
    for(int* price_today = prices+1,*end=prices+pricesSize,last_least_price = *prices;
        price_today!=end;++price_today)
    {
        if(last_least_price<*price_today)
            profit+=*price_today-last_least_price;
        last_least_price=*price_today;
    }
    return profit;
}