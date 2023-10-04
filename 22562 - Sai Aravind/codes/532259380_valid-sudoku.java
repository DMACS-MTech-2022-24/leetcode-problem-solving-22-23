class Solution {
    public boolean isValidSudoku(char[][] board) {
        HashSet<Character>[] col = new HashSet[9],row= new HashSet[9],box= new HashSet[9];
        int i,j;
        for(i=0;i<9;++i)
        {
            row[i] = new HashSet();
            col[i] = new HashSet();
            box[i] = new HashSet();
        }  
        for(i=0;i<9;++i)
        {
            for(j=0;j<9;++j)
            {
                if(board[i][j]=='.')
                    continue;
                if(!row[i].add(board[i][j]))
                   return false;
                if(!col[j].add(board[i][j]))
                   return false;
                if(!box[i/3+3*(j/3)].add(board[i][j]))
                   return false;
            }
        }
        return true;
    }
}