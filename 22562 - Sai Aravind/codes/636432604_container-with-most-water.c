

int maxArea(int* height, int heightSize){
    int maxArea=0,l=0,r=heightSize-1,curArea;
    while(l<r)
    {
        curArea =(r-l)*(height[l]<height[r]?height[l++]:height[r--]);
        if(curArea>maxArea)
        {
            maxArea = curArea;
        }
    }
    return maxArea;
}