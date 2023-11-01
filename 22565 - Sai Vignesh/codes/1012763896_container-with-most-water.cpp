class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int i=0,j = height.size()-1;
        int area=0;
        while(i<j)
        {
           area = height[i]<height[j] ? max(area,(j-i) * height[i++]): max(area,(j-i) * height[j--]);
        }
        return area;

        
    }
};