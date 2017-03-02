#include<iostream>
#include<vector>
using namespace std;
vector <int> adj[1000];
int main()
{
    int x, y, nodes, edges;
    cin >> nodes>>edges;
    for(int i = 0; i < edges; ++i)
    {
        cin >> x >> y;
        adj[x].push_back(y);
    }
    int Q;
    cin>>Q;
    for(int k=0;k<Q;k++){
        cin>>x>>y;
        int flag=0;
        for(int j = 0;j < adj[x].size();++j)
        {
            if(adj[x][j]==y){
                cout<<"YES"<<endl;
                flag=1;
            }
        }
        if(flag==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
