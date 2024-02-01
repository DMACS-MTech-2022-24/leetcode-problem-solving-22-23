class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> st;
        int x = 0, y =0;
        st.insert({x,y});
        for(int i = 0; i <path.size() ; i++){
            if(path[i] == 'N')
                y += 1;
            else if(path[i] == 'E')
                    x += 1;
            else if(path[i] =='W')
                    x -= 1;
            else if(path[i] == 'S')
                    y -= 1;

            if(st.count({x,y})!=0)
               return true;
            else
                st.insert({x,y});
        }        
        return false;
    }
};