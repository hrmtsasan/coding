vector<vector<int> > Solution::generateMatrix(int A) 
{
    vector<vector<int>> ans(A, vector<int> (A));
    int rows=0,rowe=A-1,cols=0,cole=A-1;
    int count=1;
    while(rows<=rowe && cols<=cole)
    {
        for(int i=cols;i<=cole;i++)
        {
            ans[rows][i] = count++;
        }
        rows++;
        for(int i=rows;i<=rowe;i++)
        {
            ans[i][cole] = count++;
        }
        cole--;
        if(cols<=cole)
        {
          for(int i=cole;i>=cols;i--)
          {
            ans[rowe][i] = count++;
          }  
          rowe--;
        }
        if(rows<=rowe)
        {
          for(int i=rowe;i>=rows;i--)
          {
            ans[i][cols] = count++;
          }  
          cols++;
        }
    }
    return ans;
}
