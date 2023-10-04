/*
class Solution
{
    public:
    //Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> distance(V,INT_MAX);

        set<pair<int,int>> st;
        st.insert({0,S});//Distance Node
        distance[S]=0;

        while(!st.empty()){
            auto top=*(st.begin());
            int dis=top.first;
            int topnode=top.second;
            st.erase(top);

            for(auto neighbour:adj[topnode]){
                int v = neighbour[0], wt = neighbour[1];
                if(dis+wt <distance[v]){

                    auto record=st.find({distance[v],v});
                    if(record!=st.end()){
                        st.erase(record);
                    }
                        distance[v]=wt+dis;
                        st.insert({distance[v],v});
                }
            }
            // for(auto i: adj[u]) {
            //     int v = i[0], wt = i[1];
            //     if(d + wt < distance[v]) {
            //         if(distance[v] != INT_MAX) st.erase({distance[v], v});
            //         distance[v] = d + wt;
            //         st.insert({distance[v], v});
            //     }
            // }
        }

        return distance;
    }
};*/