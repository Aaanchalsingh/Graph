/*
void bfs(int roww,int coll,vector<vector<char>>&adj,vector<vector<int>>&visited){
        queue<pair<int,int>> q;
        q.push({roww,coll});
        visited[roww][coll]=1;
         int p =adj.size();
        int qo = adj[0].size();
        while(!q.empty()){
            
            int m=q.front().first;
            int n=q.front().second;
            q.pop();
            
            for(int row=-1;row<=1;row++){
                for(int col=-1;col<=1;col++){
                        int nrow=row+m;
                        int ncol=col+n;
                    
                        if(nrow<p&&nrow>=0&&ncol<qo&&ncol>=0&&adj[nrow][ncol]=='1'&&!visited[nrow][ncol])
                        {
                            q.push({nrow,ncol});
                            visited[nrow][ncol]=1;
                        }
            }
        }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        int c=0;
        vector<vector<int>> visited(n,vector<int>(m,0));
         for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(grid[row][col]=='1'&&(!(visited[row][col])))
                {
                    c++;
                    bfs(row,col,grid,visited);
                }
            }
        }
        return c;
        
    }*/