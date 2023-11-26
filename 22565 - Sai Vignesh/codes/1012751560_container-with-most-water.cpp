class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j = height.size()-1;
        int area=0,tmp=0;
        while(i<j)
        {
            if(height[i]<=height[j]  )
            {
                tmp = height[i] * (j-i);
                // cout<<tmp<<" "<<i<<" "<<j<<" "<<j-i<<" "<<height[i]<<endl;
                ++i;
            }
            else 
            {
                tmp = height[j] * (j-i);
                // cout<<tmp<<" "<<i<<" "<<j<<" "<<j-i<<" "<<height[j]<<endl;
                --j;
            }
            if(tmp>area)
            {
                area = tmp;
                // cout<<area<<endl;
            } 
        

        }
        return area;

        
    }
};