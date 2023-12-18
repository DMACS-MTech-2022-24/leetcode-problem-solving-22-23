class Solution {
    public int findGCD(int[] nums) {
        int a=nums[0],b=nums[0];
        for(int i: nums)
            {
               if(i<a)
                   a=i;
                else if(i>b)
                    b=i;
            }
  for (int R=a%b;R > 0;R=a%b)  {
    a = b;
    b = R;
  }
        return b;
    }
}