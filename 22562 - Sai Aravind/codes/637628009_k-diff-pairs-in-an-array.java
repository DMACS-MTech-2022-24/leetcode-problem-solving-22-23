import java.util.*;
class Solution {
    public int findPairs(int[] nums, int k) {
        SortedSet<int[]> pairs = new TreeSet<>((int[] a,int[] b)->a[0]-b[0]+a[1]-b[1]);
        PriorityQueue<Integer> inp = new PriorityQueue<Integer>(); 
        int q1,q2,flag;
        for(int i : nums)
        {
            flag=0;
            q1 = i+k;
            q2= i-k;
            if(inp.contains(q1))
            {
                pairs.add(new int[]{i,q1});
                ++flag;
            }
            if(inp.contains(q2))
            {
                pairs.add(new int[]{i,q2});
                ++flag;
            }
            if(flag==2)
            {
                inp.remove(i);
            }
            else
            {
                inp.add(i);
            }
        }
        return pairs.size();
    }
}