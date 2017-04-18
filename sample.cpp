#include<bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false);cin.tie(0);
 
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define repab(i,a,b) for(ll i=a;i<b;i++)
#define repl(i,n) for(ll i=0;i<n;i++)
#define ict int t;cin>>t;while(t--)
#define lct long long int t;cin>>t;while(t--)
#define in(a) int a; cin>>a;
#define llin(a) ll a; cin>>a;

#define si(a)     scanf("%d", &a)
#define sl(a)     scanf("%lld", &a)
#define pi(a)     printf("%d", a)
#define pl(a)     printf("%lld", a)
#define pn        printf("\n")

#define ll long long
#define ll long long
#define elif else if
#define ff first
#define ss second
#define pii pair<ll int,ll int>
#define CLEAR(array, value) memset(ptr, value, sizeof(array));
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define all(a) a.begin(),a.end()
#define bitcnt(x) __builtin_popcountll(x)
#define MOD 1000000007
#define total 5000005
#define Me 1000000000001
#define NIL 0
#define MAXN 210005
#define EPS 1e-5
#define INF (1<<28)
#define pi 3.141593


typedef long long int ll; // [9,223,372,036,854,775,807 to -9.....808]
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef set<int> si;
typedef set<ll> sl;
typedef map<string, ll> mapsl;
typedef map<string, int> mapsi;
typedef map<int,int> mapii;
typedef map<ll, ll> mapll;
typedef unsigned long long int uint64;
typedef long long int int64;
int a[100005]={0};

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	memset(a,0,sizeof(a));
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,n,m;
	 	cin>>n>>m;
		assert(1<=n && n<=100000);
		assert(1<=m && m<=100000);
		vector<ll int>v(n+m);
		rep(i,n+m){
			cin>>v[i];
			assert(0<= v[i] && v[i]<= 1000000000000);
  		}
    		set<ll int>mys;
    		rep(i,n)
      		mys.insert(v[i]);
    		for(i=n;i<n+m;i++)
    		{
      			if(mys.find(v[i])!=mys.end())
        		cout<<"YES\n";
      			else
        		cout<<"NO\n";
      			mys.insert(v[i]);
  		}
  	}
	return 0;
}
