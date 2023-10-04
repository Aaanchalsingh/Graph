#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    void creation(unordered_map<int, list<int>> &adj)
    {

        int u, v;
        for (int i = 0; i < 5; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    void printlist(unordered_map<int, list<int>> &adj)
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
                cout << j << ",";
            cout << endl;
        }
    }
} q;
int main()
{
    unordered_map<int, list<int>> adj;
    q.creation(adj);
    q.printlist(adj);
    return 0;
}