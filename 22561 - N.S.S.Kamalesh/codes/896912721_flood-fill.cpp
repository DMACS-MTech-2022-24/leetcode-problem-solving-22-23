class Solution {
public:
    vector<vector<int>>im;
    int col,c;
    void dfs(int i,int j){
        if(i<0||j<0||i>=im.size()||j>=im[0].size()||im[i][j]==col)
            return;
        if(im[i][j]==c){
            im[i][j]=col;
            dfs(i-1,j);
            dfs(i,j-1);
            dfs(i+1,j);
            dfs(i,j+1);
        }
        else return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        im=image;col=color;c=image[sr][sc];
        dfs(sr,sc);
        return im;
    }
};