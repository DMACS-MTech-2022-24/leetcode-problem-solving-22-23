class Solution {
public:
    int maxArea(vector<int>& height) {
        int p=0,q=height.size()-1;
        int max_vol=0;
        while(p<q)
        {
            const auto a=height[p];
            const auto b=height[q];
            const auto vol=min(a,b)*(q-p);
            if(vol>max_vol)
            {
                max_vol=vol;
            }
            p+=int(a<b);
            q-=int(a>=b);
            // cout<<a<<" "<<p<<"\t"<<b<<" "<<q<<"\n";
        }
        return max_vol;
    }
};