#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define elif else if
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define CLEAR(array, value) memset(ptr, value, sizeof(array));
#define si(a)     scanf("%d", &a)
#define sl(a)     scanf("%lld", &a)
#define pi(a)     printf("%d", a)
#define pl(a)     printf("%lld", a)
#define pn        printf("\n")
#define SZ(x)  (int)((x).size())
int main()
{
    freopen("test.txt","r",stdin);
	ios::sync_with_stdio(false);
	int t;
	//scanf("%d",&t);
	cin>>t;
	while(t--)
	{
		int i,j,k,n,m;
		//scanf("%d",&n);
		cin>>n>>m;
		vector<int>v1(n);
		vector<int>v2(m);
		vector<int>v3;
		rep(i,n)cin>>v1[i];
		rep(i,m)cin>>v2[i];
		v3.insert(v3.end(),v1.begin(),v1.end());
		v3.insert(v3.end(),v2.begin(),v2.end());
		sort(v3.rbegin(),v3.rend());
//		rep(i,n)
//		{
//			rep(j,n-1)
//			{
//				if(v[j]<v[j+1])
//				swap(v[j],v[j+1]);
//			}
//		}
		rep(i,v3.size())cout<<v3[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
