class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ttime = neededTime[0];
        int i =1;
        int maxx = neededTime[0];
        while( i < colors.size() ) {
            if (colors[i] == colors[i - 1]) {
                ttime += neededTime[i];
                maxx = max(neededTime[i], maxx);
                i++;
            }
            else{
                ttime -= maxx;
                maxx=neededTime[i];
                ttime += neededTime[i];
                i++;
            }
        }
        ttime -= maxx;
        return ttime;
    }
};