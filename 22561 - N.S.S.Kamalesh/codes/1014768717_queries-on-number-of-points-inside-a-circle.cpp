class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>a;int c,x,y,z;float d;
        for(auto i:queries){
            c=0;
            x=i[0];y=i[1];z=i[2];
            for(auto j:points){
                d=sqrt(pow(x-j[0],2)+pow(y-j[1],2));
                if(d<=z)++c;
            }
            a.emplace_back(c);
        }
        return a;
    }
};