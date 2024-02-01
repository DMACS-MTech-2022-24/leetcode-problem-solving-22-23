class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ttime = neededTime[0];
        int i =1;
        int maxx = neededTime[0];
        bool flag=false;
        while( i < colors.size() ) {
            if (colors[i] == colors[i - 1]) {
                ttime += neededTime[i];
                maxx = max(neededTime[i], maxx);
                i++;
                flag=true;
            }
            else{
                flag=false;
                ttime -= maxx;
                maxx=neededTime[i];
                ttime += neededTime[i];
                i++;
            }
            cout<<i<<endl;
        }
        ttime -= maxx;
        return ttime;
    }
};