#include<bits/stdc++.h>
using namespace std;
#define  mp make_pair
#define  pb push_back
#define  M 1000000007
typedef long long int ll;
int fs()
{
	int x=0;
	char c=getchar_unlocked();
	while (!('0'<=c&&c<='9'))
		c=getchar_unlocked();
	while ('0'<=c&&c<='9')
	{
		x=(x<<3)+(x<<1)+c-'0';
		c=getchar_unlocked();
	}
	return x;
}
int main()
{
    freopen("test.txt","r",stdin);
	int t,n;
	bool m=false;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			a[i]=fs();
		}
		for(int i=0;i<n;i++)
		{
            m=false;
            for(int j=i+1;j<n;j++)
                if(a[j]<a[i]){
                    cout<<"1"<<" ";
                    m=true;
                }
                if(m==false)
                cout<<"0"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
