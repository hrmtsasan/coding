class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid)
    {
        int count=-1;
        if(grid[0][0]==0 and grid.size()==1 and grid[0].size()==1)
            return 0;
        vector<vector<bool>> vis(grid.size(), vector<bool> (grid[0].size(), false));
        queue<pair<int,int>> q;
        int c=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                    vis[i][j] = true;
                }
                if(grid[i][j]==0)
                {
                    c++;
                }
            }
        }
        if(c==(grid.size()*grid[0].size()))
            return 0;
        
        
        int dx[] = {-1,0,1,0};
        int dy[] = {0,1,0,-1};
        while(!q.empty())
        {
            count++;
            int steps = q.size();
            for(int i=0;i<steps;i++)
            {
                auto temp = q.front();
                int x = temp.first;
                int y = temp.second;
                q.pop();
                for(int j=0;j<4;j++)
                {
                    int x1 = x + dx[j];
                    int y1 = y + dy[j];
                    
                    if(x1>=0 and x1<grid.size() and y1>=0 and y1<grid[0].size())
                    {
                        if(!vis[x1][y1] and grid[x1][y1])
                        {
                            vis[x1][y1] = true;
                            q.push({x1,y1});
                        }
                    }
                }
            }
        }
      
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]>0 and vis[i][j]==false)
                {
                    return -1;
                }
            }
        }
        return count;
    }
};