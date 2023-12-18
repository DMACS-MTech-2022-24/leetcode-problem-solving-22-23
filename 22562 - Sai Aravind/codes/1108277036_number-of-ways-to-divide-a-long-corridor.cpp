class Solution {
public:
    int numberOfWays(string corridor) {
        uint n_S=0,n_P=0,n_Comb=1,found_first_S=-1;
        static const auto m = 1000000007;
        for(const auto &x:corridor)
        {
            switch(x)
            {
                case 'S':
                    if(n_S++ == 1)
                    {
                        int res = 0;
                        // In case of overflow, run modulo multiplication
                        if(++n_P<=std::numeric_limits<uint>::max()/n_Comb)
                        {
                            n_Comb*=n_P;
                        }
                        else
                        {
                            while (n_Comb != 0)
                            {
                                if (n_Comb & 1) res = (res + n_P) % m;
                                n_Comb >>= 1;
                                n_P = (n_P << 1) % m;
                            }
                            n_Comb=res;
                        }
                        found_first_S=n_S=n_P=0;
                    }
                    break;
                case 'P':
                    n_P+=(found_first_S==n_S);
            }
        }
        if(found_first_S==n_S)
        {
            return n_Comb% m;
        }
        else
        {
            return 0;
        }
    }
};