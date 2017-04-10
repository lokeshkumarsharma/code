#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define ll long long

#define ll long long
#define elif else if
#define ff first
#define ss second
#define pii pair<ll int,ll int>
#define mp make_pair
#define pb push_back
#define CLEAR(array, value) memset(ptr, value, sizeof(array));

#define si(a)     scanf("%d", &a)
#define sl(a)     scanf("%lld", &a)
#define pi(a)     printf("%d", a)
#define pl(a)     printf("%lld", a)
#define pn        printf("\n")

vector <int> v[100000];
int level[100000];
bool vis[100000];
    void bfs(int s) {
        queue <int> q;
        int t=1,i;
        q.push(s);
        level[s]=1 ;
        vis[s]=true;
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            rep(i,v[p].size()){
                if(vis[v[p][i]]== false)
                {
                    level[v[p][i]]=level[p]+1;
                     q.push(v[ p ][ i ]);
                     vis[ v[ p ][ i ] ] = true;
                }
            }
        }
    }
    void NodesNo(int z,int n){
    int no=0,i;
        rep1(i,n){
            if(level[i]==z)
                no++;
        }
        cout<<no;
    }
int main(){
    freopen("test.txt","r",stdin);
    int x,y,n,z;
	cin>>n;
    for(int i=1;i<n;i++){
        si(x);
        si(y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs(1);
    si(z);
    NodesNo(z,n);
}
