class Solution {
public:
    int nCk( int n, int k )
    {
        if (k > n) return 0;
        if (k * 2 > n) k = n-k;
        if (k == 0) return 1;

        int result = n;
        for( int i = 2; i <= k; ++i ) {
            result *= (n-i+1);
            result /= i;
        }
        return result;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        vector<vector<int>> combinations;
        nums.push_back(0);
        int n2=nCk(n,k);
        int num=0;
        while(n2>0)
        {
            auto N=nums.size();
            for(int i=0;i<N and n2>0;++i)
            {
                ++num;
                auto X=nums[i]+1;
                nums.push_back(X);
                if(X==k)
                {
                    vector<int> combination;
                    int Y=num;
                    // cout<<X<<" "<<Y<<"\n";
                    for(int i=1;Y>0;++i,Y>>=1)
                    {
                        if((Y&1)==1)
                        {
                            combination.push_back(i);
                        }
                    }
                    combinations.push_back(combination);
                    --n2;
                }
            }
        }
        return combinations;
    }
};