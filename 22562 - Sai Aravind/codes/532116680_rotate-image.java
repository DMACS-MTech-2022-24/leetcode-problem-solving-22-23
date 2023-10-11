class Solution {
    public void rotate(int[][] matrix) {
        int i,j,t;
        int[] tmp;
        t= matrix.length-1;
        for(i=0;i<matrix.length/2;++i)
        {
            tmp = matrix[i];
            j = t-i;
            matrix[i]=matrix[j];
            matrix[j]=tmp;
        }
        for(i=1;i<matrix.length;++i)
        {
            for(j=0;j<i;++j)
            {
                t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
            }
        }
        
    }
}