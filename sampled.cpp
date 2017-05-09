#include<bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false);cin.tie(0);

#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define repab(i,a,b) for(ll i=a;i<b;i++)
#define repl(i,n) for(ll i=0;i<n;i++)
#define ict int t;scanf("%d",&t);while(t--)
#define lct long long int t;scanf("%lld",&t);while(t--)
#define in(a) int a; scanf("%d",&a);
#define llin(a) ll a; scanf("%lld",&a);

#define si(a)     scanf("%d", &a)
#define sl(a)     scanf("%lld", &a)
#define pr(a)     printf("%d", a)
#define pl(a)     printf("%lld", a)
#define pn        printf("\n")
#define tn	  printf("\t")
#define get1(c1)  c1=gets()
#define put1(c1)  puts(c1)
#define wh(n)     while(n>0)
#define mem(a)	  memset(a,0,sizeof(a))

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
#define arsize 100005

typedef long long int lli; // [9,223,372,036,854,775,807 to -9.....808]
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
//typedef pair<int,int> pii;
//typedef pair<ll,ll> pll;
typedef set<int> si;
typedef set<ll> sl;
typedef map<string, ll> mapsl;
typedef map<string, int> mapsi;
typedef map<int,int> mapii;
typedef map<ll, ll> mapll;
typedef unsigned long long int uint64;
typedef long long int int64;
typedef int* pint;

template<typename T> T lcm(T a, T b){return (a*(b/__gcd(a,b)));}
template<typename T> T MOD(T a, T b) {return (a<b ? a : a%b);}
template<typename T> T add(T a, T b, T c){T x=a+b;return (x>=c ? x-c : x);}
template<typename T> T mod_neg(T a, T b) {a=MOD(a, b);if(a<0){a+=b;}return a;}
template<typename T> T expo(T e, T n){T x=1,p=e;while(n){if(n&1)x=x*p;p=p*p;n>>=1;}return x;}
template<typename T> T power(T e, T n, T m){T x=1,p=e;while(n){if(n&1)x=MOD(x*p,m);p=MOD(p*p,m);n>>=1;}return x;}
template<typename T> T extended_euclid(T a, T b, T &x, T &y){T xx=0,yy=1;y=0;x=1;while(b){T q=a/b,t=b;b=a%b;a=t;t=xx;\
xx=x-q*xx;x=t;t=yy;yy=y-q*yy;y=t;}return a;}
template<typename T> T mod_inverse(T a, T n){T x,y;T d = extended_euclid(a, n, x, y);return (d>1?-1:mod_neg(x,n));}
#define tcsolve() int tcs; scan(tcs); while(tcs--) solve();

int a[arsize]={0};

int main()
{
	_;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	mem(a);
	ict{
		int i,j,n,m;
		si(n),si(m);
		assert(1<=n && n<=100000);
		assert(1<=m && m<=100000);
		rep(i,n+m){
			si(a[i]);
			assert(0<= a[i] && a[i]<= 1000000000000);
  		}
  	}
	return 0;
}
