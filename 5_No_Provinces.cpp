
void dfs(int i, vector<int> adj[], int *visited)
{
    visited[i] = 1;
    for (auto j : adj[i])
    {
        if (!visited[j])
            dfs(j, adj, visited);
    }
}
int numProvinces(vector<vector<int>> adj, int V)
{
    vector<int> adj1[V];
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (adj[i][j] == 1 && i != j)
            {
                adj1[i].push_back(j);
                adj1[j].push_back(i);
            }
        }
    }
    int visited[V] = {0};
    int c = 0;
    for (int i = 0; i < V; i++)
    {
        if (visited[i] == 0)
        {
            c++;
            dfs(i, adj1, visited);
        }
    }
    return c;
}
}
;