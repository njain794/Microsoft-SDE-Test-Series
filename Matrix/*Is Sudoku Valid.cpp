int isValid(vector<vector<int>> mat)
    {
        int row[9][9]={false};
        int col[9][9]={false};
        int box[3][3][9]={false};
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(mat[i][j]==0)
                {
                    continue;
                }
                int num=mat[i][j]-1;
                if(row[i][num] || col[j][num] || box[i/3][j/3][num])
                {
                    return 0;
                }
                row[i][num]=true;
                col[j][num]=true;
                box[i/3][j/3][num]=true;
            }
        }
        
        return 1;
    }
