class Solution {
    public boolean stoneGame(int[] piles) {
        int alex=0,lee=0 ;
        for(int i=0,j =piles.length-1;i<piles.length/2;++i,--j)
        {
            if(piles[i]>piles[j])
            {
                alex += piles[i];
                lee += piles[j];
            }
            else
            {
                alex += piles[j];
                lee += piles[i];
            }
        }
        if(alex>lee)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}