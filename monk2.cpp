#include <iostream>
   #include <vector>
    using namespace std;

    vector <int> adj[10];
    bool visited[10];
    int l=0;
    void dfs(int s) {
        visited[s] = true;
        int m=0;
        for(int i = 0;i < adj[s].size();++i)    {
         if(visited[adj[s][i]] == false){
             dfs(adj[s][i]);
             m++;
         }
        }
        if(l<m)
            l=m;
    }
    void initialize() {
        for(int i = 0;i < 10;++i)
         visited[i] = false;
    }
    int main() {
        int nodes, edges, x, y, connectedComponents = 0;
        cin >> nodes>> edges;
        for(int i = 0;i < edges;++i) {
         cin >> x >> y;
         adj[x].push_back(y);
         adj[y].push_back(x);
        }
        initialize();
        for(int i = 1;i <= nodes;++i) {
         if(visited[i] == false)     {
             dfs(i);
             connectedComponents++;
         }
        }
        cout<<l;
        return 0;
    }
