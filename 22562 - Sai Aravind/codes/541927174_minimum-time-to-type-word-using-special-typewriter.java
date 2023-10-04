class Solution {
    public int minTimeToType(String word) {
        int seconds=0,tmp;
        int pointer = 'a';
        for(char x : word.toCharArray())
        {
            tmp = Math.abs((int)pointer-x);
            seconds += 1+(tmp>12?26-tmp:tmp);
            pointer = x;
        }
        return seconds;
    }
}