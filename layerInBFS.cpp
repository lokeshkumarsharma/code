#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector <int> v[10000];
int level[10000];
bool vis[10000];
    void bfs(int s) {
        queue <int> q;
        q.push(s);
        level[s]=1 ;
        vis[s] = true;
        while(!q.empty())
        {
            int p = q.front();
            cout<<p<<endl;
            q.pop();
            for(int i = 1;i <=v[p].size();i++)
            {
                if(vis[v[p][i]]== false)
                {
                    level[v[p][i]]=level[p]+1;
                     q.push(v[p][i]);
                     vis[v[p][i]] = true;
                }
            }
        }
    }
    void initialize(int n) {
        for(int i = 0;i <=n;++i)
         vis[i] = false;
    }
int main(){
    int x,y,n,k=1,l=0;
	cin>>n;
    for(int i=1;i<n;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    initialize(n);
    cin>>x;
    bfs(k);
    for(int i = 1;i <=n;++i)
    {
        for(int j = 0;j < v[i].size();++j)
        {
            if(level[v[i][j]]==x)
                l++;
        }
    }
    return 0;
}
