

int maxArea(int* height, int heightSize){
    int maxArea=0,l=0,r=heightSize-1,curArea,h,t=-1;
    while(l<r)
    {
        if(height[l]<height[r])
        {
            h=height[l];
            curArea =(r-l)*h;
            while(height[l]<=h&&l<r)++l;
        }
        else
        {
            h=height[r];
            curArea =(r-l)*h;
            while(height[r]<=h&&l<r)--r;
        }
        
        if(curArea>maxArea)
        {
            maxArea = curArea;
        }
    }
    return maxArea;
}