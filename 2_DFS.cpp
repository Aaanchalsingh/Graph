#include <bits/stdc++.h>
using namespace std;
void dfs(int i, vector<int> adj[], int *visited)
{
    visited[i] = 1;
    cout << i << " ";
    for (auto j : adj[i])
    {
        if (!visited[j])
            dfs(j, adj, visited);
    }
}
int main()
{
    int V = 5;
    vector<int> adj[V];
    int visited[V] = {};
    int u, v;
    for (int i = 0; i < V; i++)
    {
        u=1;v=2;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0, adj, visited);
    return 0;
}
/*
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int i, vector<int> adj[],vector<int> &ans,int*visited){
        visited[i]=1;
        ans.push_back(i);
        for(auto j:adj[i]){
            if(!visited[j]) 
                dfs(j,adj,ans,visited);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int visited[V]={0};
        vector<int> ans;
        dfs(0,adj,ans,visited);
        return ans;
    }
};*/