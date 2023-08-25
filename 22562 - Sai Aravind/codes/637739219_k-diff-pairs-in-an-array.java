import java.util.*;
class Solution {
    public int findPairs(int[] nums, int k) {
        int count=0,q1,q2;
        HashMap<Integer,Integer> lpairs = new HashMap<>();
        HashMap<Integer,Integer> rpairs = new HashMap<>();
        HashMap<Integer,Integer> kpairs = new HashMap<>();
        for(int i:nums)
        {
            q1=i+k;
            q2=i-k;
            if(lpairs.remove(q1,i))
            {
                kpairs.put(q1,i);
            }
            else
                rpairs.put(q1,i);
            if(k!=0&&rpairs.remove(i,q2))
            {
                kpairs.put(i,q2);
            }
            else
                lpairs.put(i,q2);
        }
        return kpairs.size();
    }
}