class Solution {
    public String findDifferentBinaryString(String[] nums) {
        List<Integer> ns = Arrays.stream(nums).map(i -> Integer.parseUnsignedInt(i,2)).distinct().sorted().collect(Collectors.toList());
        int i;
        for(i=0;i<ns.size();++i)
        {
            if(ns.get(i)!=i)
            {
                break;
            }
        }
        String x = Integer.toBinaryString(i);
        
        return IntStream.range(0, nums[0].length()-x.length()).mapToObj(index -> "0").collect(Collectors.joining())+x;
    }
}