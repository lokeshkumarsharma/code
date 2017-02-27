#include<bits/stdc++.h>
using namespace std;
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
    cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1<<" | ";
    __f(comma+1, args...);
}
#define mod 1000000007
#define ll long long
//const ll mod=1000000007;
#define vi vector<int>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define fills(x,y) memset(x,y,sizeof x)
#define rep(i,n) for(i=0;i<n;++i)
#define REP(i,k,n) for(i=k;i<=n;++i)
#define tr(i,c) for(auto &i:c)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define inchar          getchar
#define outchar(x)      putchar(x)
#define bitcount(n) __builtin_popcountll(n)
#define sz(a) int((a).size())
//static const int inf = INT_MAX;static const long long infl = LONG_MAX;
template<typename T, typename U> static void amin(T &x, U y) {
    if(y < x) x = y;
}
template<typename T, typename U> static void amax(T &x, U y) {
    if(x < y) x = y;
}
template<typename T> void scan(T &x) {
    x=0;
    register T c=inchar();
    while((c<48)||(c>57))c=inchar();
    \
    for(; c<48||c>57; c=inchar());
    for(; c>47&&c<58; c=inchar())x=(x<<3)+(x<<1)+(c&15);
}
template<typename T> void output(T n) {
    char snum[65];
    int i=0;
    do {
        snum[i++]=n%10+'0';
        n/=10;
    }\
    while(n);
    i=i-1;
    while(i>=0)outchar(snum[i--]);
    outchar('\n');
}
inline void instr(char *str) {
    register char c=0;
    register int i=0;
    while(c<33)c=inchar();
    while (c!='\n'&&c!=' '&&c!=EOF) {
        \
        str[i]=c;
        c=inchar();
        ++i;
    }
    str[i]='\0';
}
template<typename T> T lcm(T a, T b) {
    return (a*(b/__gcd(a,b)));
}
template<typename T> T MOD(T a, T b) {
    return (a<b ? a : a%b);
}
template<typename T> T add(T a, T b, T c) {
    T x=a+b;
    return (x>=c ? x-c : x);
}
template<typename T> T mod_neg(T a, T b) {
    a=MOD(a, b);
    if(a<0) {
        a+=b;
    }
    return a;
}
template<typename T> T expo(T e, T n) {
    T x=1,p=e;
    while(n) {
        if(n&1)x=x*p;
        p=p*p;
        n>>=1;
    }
    return x;
}
template<typename T> T power(T e, T n, T m) {
    T x=1,p=e;
    while(n) {
        if(n&1)x=MOD(x*p,m);
        p=MOD(p*p,m);
        n>>=1;
    }
    return x;
}
template<typename T> T extended_euclid(T a, T b, T &x, T &y) {
    T xx=0,yy=1;
    y=0;
    x=1;
    while(b) {
        T q=a/b,t=b;
        b=a%b;
        a=t;
        t=xx;
        \
        xx=x-q*xx;
        x=t;
        t=yy;
        yy=y-q*yy;
        y=t;
    }
    return a;
}
template<typename T> T mod_inverse(T a, T n) {
    T x,y;
    T d = extended_euclid(a, n, x, y);
    return (d>1?-1:mod_neg(x,n));
}
#define tcsolve() int tcs; scan(tcs); while(tcs--) solve();

int binary(int n,int arr[],int len)
{
    int i=0,mid,sz=len;
    while(i<=sz)
    {   mid=(i+sz)/2;
        //trace(mid);
        if((arr[mid]==n and arr[mid-1]!=n) or (n>arr[mid-1] and n<arr[mid]))
        {   //trace(mid);
            return mid;
        }
        if(arr[mid]>=n)
            sz=mid-1;
        else
            i=mid+1;
    }
    return -1;
}
void solve()
{
    int n,i,j,sum=0,ans,q,x,num;
    scan(n);
    int arr[n+2];
    REP(i,1,n)
    {
        scan(arr[i]);
    }
    arr[0]=0;
    sort(arr,arr+n+1);
    scan(q);
    while(q--)
    {
        scan(x),scan(num);

        if(!x)
        {
            ans=binary(num,arr,n);
        }
        else {
            ans=binary(num+1,arr,n);
        }
        if(~ans)
            printf("%d\n",n-ans+1);//,trace(ans);
        else puts("0");
    }
}
main()
{
#ifndef ONLINE_JUDGE
freopen("test.txt","r",stdin);
//freopen("output.txt","w",stdout);
#endif
    solve();
}
