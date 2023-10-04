/*
class Solution {
  public:
    bool bfs(int i, vector<int> adj[],int visited[],int nvisit[]){
    nvisit[i]= true;
    visited[i] = true;
    for (auto j : adj[i])
    {
        if (!visited[j])
        {
            if(bfs(j, adj, visited,nvisit))
                return true;
        }
        else if(nvisit[j]) return true;
    }
    nvisit[i]=false;
    return false;
}
    bool isCyclic(int V, vector<int> adj[]) {
        int visited[V]={};
        int nvisit[V]={};
        for (int i = 0; i < V; i++)
        {
            if (!visited[i]){
                if(bfs(i, adj, visited,nvisit))
                        return true;
            }
        }
        return false;
    }
};*/