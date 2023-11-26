class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        int count=0;
        if(m==0){
            if(n==0)
                return true;
            else
                return false;
        }
        else if(m==1){
            if(flowerbed[0]==0){
                if(n<=1)
                    return true;
                else
                    return false;
            }
            else {
                if(n==0)
                    return true;
                else
                    return false;
            }
        }
        else
            for(int i = 0;i<m; i++){
                if(flowerbed[i] == 0){
                    //begining check only right value
                    if(i==0 && flowerbed[i+1]==0){
                        flowerbed[i] = 1;
                        count++;
                        }
                    // check what is its previous and next digits
                    else if(i==m-1 && flowerbed[i-1]==0){
                        flowerbed[i]=1;
                        count++;
                    }
                    else if (i>0 && flowerbed[i-1]==0 && i<m-1 && flowerbed[i+1]==0){
                            flowerbed[i]=1;
                            count++;
                    }
                    //ending check only left value
                    cout<<count<<" "<<n<<"\n";
                    if(count >= n)
                        return true;
                }
            }
        return false;
    }
};