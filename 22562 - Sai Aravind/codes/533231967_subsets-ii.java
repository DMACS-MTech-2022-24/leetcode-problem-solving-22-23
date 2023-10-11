class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        int mask, counter,i, n = (int)Math.pow(2,nums.length);
        List<Integer> set;
        List<List<Integer>> power_set = new LinkedList<>();
        for(counter=0;counter<n;++counter)
        {
            set = new ArrayList<>();
            for(mask = 1,i=0; mask<=counter; mask<<=1,++i)
            {
                if((counter&mask)!=0)
                {
                    set.add(nums[i]);
                }
            }
            Collections.sort(set);
            sortedInsert(power_set,set);
        }
        return power_set;
    }
    void sortedInsert(List<List<Integer>> a, List<Integer> b)
    {
        List<Integer> tmp;
        int x;
        ListIterator<List<Integer>> it = a.listIterator();
        while(it.hasNext())
        {
            tmp = it.next();
            x = compare(tmp,b);
            if(x<0)
            {
                it.previous();
                it.add(b);
                return;
            }
            if(x==0)
            {
                return;
            }
        }
        it.add(b);
    }
    int compare(List<Integer> a, List<Integer> b)
    {
        int p,q;
        Iterator<Integer> ia = a.iterator(), ib = b.iterator();
        while(ia.hasNext() && ib.hasNext())
        {
            p = ia.next();
            q = ib.next();
            if(p!=q)
                return q-p;
        }
        if(ia.hasNext())
        {
            return -1;
        }
        if(ib.hasNext())
        {
            return 1;
        }
        return 0;
    }
}