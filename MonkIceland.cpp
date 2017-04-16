#include<bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false);cin.tie(0);

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


typedef unsigned long long int uint64;
typedef long long int int64;

int main()
{
	freopen("test.txt","r",stdin);
	int t;
	si(t);
	while(t--)
	{
		int i,j=0,n,m,x,y;
		si(n),si(m);
		bool vis[n+1];
		int lev[n+1];
		rep1(i,n)
		vis[i]=false;
		vector<int> v[100000];
        rep1(i,m){
            si(x),si(y);
            v[x].pb(y);
            v[y].pb(x);
        }
  		queue<int> q;
  		q.push(1);
  		vis[1]=true;
  		lev[1]=0;
  		while(!q.empty()){
            int f=q.front();
            q.pop();
            if(f==n)
                break;
            rep(i,v[f].size()){
                if(vis[v[f][i]]==false){
                    q.push(v[f][i]);
                    vis[v[f][i]]=true;
                    lev[v[f][i]]=lev[f]+1;
                }
            }
  		}
  		cout<<lev[n]<<endl;
  	}
	return 0;
}
