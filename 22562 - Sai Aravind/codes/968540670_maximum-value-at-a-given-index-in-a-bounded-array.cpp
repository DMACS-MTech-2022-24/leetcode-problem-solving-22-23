class Solution {
public:
    static inline uint64_t curSum(int m,int index,int n)
    {
        const uint64_t p=min(m-1,index);
        const uint64_t q=min(m-1,n-index-1);
        return n+(m-1)*(p+q+1)-(p*(p+1)+q*(q+1))/2;
        // return n+p*(2*m-1-p)/2+(q+1)*(2*m-1-(q+1))/2;
    }
    int maxValue(int n, int index, int maxSum) {
        int l=0,r=maxSum;
        if(n==1)
            return maxSum;
        while(l<r)
        {
            const auto m=l+(r-l)/2;
            const auto cur_sum=curSum(m,index,n);
            const auto nxt_sum=curSum(m+1,index,n);
            
            // cout<<m<<" "<<p<<" "<<q<<" "<<cur_sum<<" "<<nxt_sum<<"\n"<<ones<<"\n";
            if(cur_sum<=maxSum and nxt_sum>maxSum)
            {
                return m;
            }
            else if(cur_sum<=maxSum)
            {
                l=m;
            }
            else
            {
                r=m;
            }
        }
        return 1;
    }
};