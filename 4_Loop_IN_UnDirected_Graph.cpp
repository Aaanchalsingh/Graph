/*
class Solution {
  public:
    
    bool bfs(int i, vector<int> adj[],unordered_map<int,bool> &visited,unordered_map<int,int> &parent){
    queue<int> q;
    q.push(i);
    parent[i]=-1;
    visited[i] = 1;
    while (!q.empty())
    {
        int data = q.front();
        q.pop();
        for (auto j : adj[data])
        {
            if (!visited[j])
            {
                q.push(j);
                visited[j] = 1;
                parent[j]=data;
            }
            else if(visited[j]==1&&parent[data]!=j){
                return true;
            }
        }
    }
    return false;
}
    
    bool isCycle(int V, vector<int> adj[]) {
        unordered_map<int,int> parent;
        unordered_map<int,bool> visited;
        
        for (int i = 0; i < V; i++)
        {
            if (!visited[i]){
                bool ans=false;
                ans=bfs(i, adj, visited,parent);
                if(ans) return true;
            }
        }
        return false;
    }
};*/