

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
  int l1=0,r1=numsSize-1,l2,r2,m,n;
  int *ret = malloc(sizeof(int)*2);
  *returnSize=2;
  for(m=(r1+l1)>>1;l1<r1;m=(r1+l1)>>1)
  {
    if(nums[m]==target)
    {
      break;
    }
    else if(nums[m]<target)
    {
      l1=m+1;
    }
    else
    {
      r1=m-1;
    }
  }
  
  if(r1<l1 || nums[m]!=target)
  {
    ret[0]=ret[1]=-1;
    return ret;
  }
  else
  {
    r2=r1;
    r1=m;
    l2=m;
  }
  
  for(m=(r1+l1)>>1;l1<r1;m=(r1+l1)>>1)
  {
    
    if(nums[m]==target)
    {
      if(m==0 || nums[m-1]<target) break;
      r1=m-1;
    }
    else if(nums[m]<target)
    {
      l1=m+1;
    }
  }
  ret[0]=(nums[m]==target && ( m==0 || nums[m-1]<target))?m:-1;
  
  for(n=(r2+l2)>>1;l2<r2;n=(r2+l2)>>1)
  {
    if(nums[n]==target)
    {
      if( n+1==numsSize || target < nums[n+1]) break;
      l2=n+1;
    }
    else if(target <nums[n])
    {
      r2=n-1;
    }
  }
  ret[1]=(nums[n]==target && ( n+1==numsSize || target < nums[n+1]))?n:-1;
  
  return ret;
}