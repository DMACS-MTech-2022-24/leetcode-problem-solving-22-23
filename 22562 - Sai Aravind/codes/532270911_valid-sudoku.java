class Solution {
    public boolean isValidSudoku(char[][] board) {
        
        int i,j,p,q,a,b;
        for(i=0;i<9;++i)
        {
            for(j=0;j<9;++j)
            {
                if(board[i][j]!='.')
                {
                    a = 3*(i/3);
                    b = 3*(j/3);
                    for(p=0;p<9;++p)
                    {
                        if((p!=i && board[p][j]==board[i][j]) 
                           || (p!=j && board[i][p]==board[i][j])
                           || ((a + p/3)!=i && (b + p%3)!=j && board[a + p/3][ b + p%3 ] == board[i][j]))
                            return false;   
                    }
                }
            }
        }
        return true;
    }
}