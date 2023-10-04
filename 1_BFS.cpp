#include <bits/stdc++.h>
using namespace std;
void bfs(int V, vector<int> adj[])
{

    int visited[V] = {0};
    queue<int> q;
    int i = 0;
    q.push(i);
    cout << i<<" ";
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
                cout <<j<<" ";
                visited[j] = 1;
            }
        }
    }
}
/*
1 2
2 3 
3 4
4 1
2 4
*/
int main()
{
    int V = 5;
    vector<int> adj[V];
    int u, v;
    for (int i = 0; i < V; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(V, adj);
    return 0;
}
/*
class Solution {
  public:
    void bfs(int V, vector<int> adj[],vector<int> &ans){
        
        int visited[V]={0};
        queue<int> q;
        int i=0;
        q.push(0);
        ans.push_back(0);
        visited[i]=1;
        while(!q.empty()){
            
            int data=q.front();
            q.pop();
            for(auto i:adj[data]){
                if(!visited[i]){
                    q.push(i);
                    ans.push_back(i);
                    visited[i]=1;}
            }
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        bfs(V,adj,ans);
        return ans;
    }
};*/