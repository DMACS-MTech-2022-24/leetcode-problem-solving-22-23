class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        List<Integer> set =new ArrayList<>();
        for(int num : nums)
        {
            set.add(num);
        }
        List<List<Integer>> power_set = new LinkedList<>();
        Map<Integer,Long> mp = set.stream().collect(Collectors.groupingBy(Function.identity(), Collectors.counting()));
        power_set.add(new LinkedList<>());
        for (Map.Entry<Integer,Long> entry : mp.entrySet())
        {
            for( ListIterator<List<Integer>> it = power_set.listIterator(); it.hasNext();)
            {
                set = it.next();
                for(long j= entry.getValue(); j>0 ; --j)
                {
                    set = new LinkedList<>(set);
                    set.add(entry.getKey());
                    it.add(set);
                }
            }
            
        }
        return power_set;
    }
}