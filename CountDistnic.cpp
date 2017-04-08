#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
	int t,x,n;
	int a[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&x);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		set<int>result(a,a+n);
		if(result.size()==x)
            cout<<"Good"<<endl;
        else if(result.size()>x)
            cout<<"Average"<<endl;
        else
            cout<<"Bad"<<endl;
	}
	return 0;

}
