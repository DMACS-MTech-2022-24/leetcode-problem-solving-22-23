

int maxProfit(int* prices, int pricesSize){
    int *price_today = prices+1,*end=prices+pricesSize,*last_least_price = prices;
    pricesSize=0;
    for(;price_today!=end;++price_today,++last_least_price)
    {
        if(*last_least_price<*price_today)
            pricesSize+=*price_today-*last_least_price;
    }
    return pricesSize;
}