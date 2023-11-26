class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j = height.size()-1;
        int area=0,tmp=0;
        int left,right;
        while(i<j)
        {
            left = height[i];
            right = height[j];
            if(left<=right)
            {
                tmp = left * (j-i);
                ++i;
            }
            else 
            {
                tmp = right * (j-i);
                --j;
            }
            if(tmp>area) area = tmp;
        
        }
        return area;

        
    }
};