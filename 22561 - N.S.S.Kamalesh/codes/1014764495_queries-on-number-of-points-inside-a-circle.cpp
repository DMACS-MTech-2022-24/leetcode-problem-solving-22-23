class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>a;int c;float d;
        for(auto i:queries){
            c=0;
            for(auto j:points){
                d=sqrt(pow(i[0]-j[0],2)+pow(i[1]-j[1],2));
                if(d<=i[2])++c;
            }
            a.emplace_back(c);
        }
        return a;
    }
};