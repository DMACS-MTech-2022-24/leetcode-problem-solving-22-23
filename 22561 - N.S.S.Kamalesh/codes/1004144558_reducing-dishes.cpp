class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        if(satisfaction[satisfaction.size()-1]<0) return 0;
        int tmp=0;
        if(satisfaction[0]>0){
            for(int i=0;i<satisfaction.size();i++)
                tmp+=(i+1)*satisfaction[i];
            return tmp;
        }
        int tmp1=0,max=INT_MIN;
        for(int i=0;i<satisfaction.size();i++)
            tmp1+=satisfaction[i];
        for(int i=0;i<satisfaction.size();i++)
            tmp+=(i+1)*satisfaction[i];
        for(int i=0;i<satisfaction.size();i++){
            if(max<tmp)
                max=tmp;
            tmp-=tmp1;
            tmp1-=satisfaction[i];
        }
        return max;
    }
};