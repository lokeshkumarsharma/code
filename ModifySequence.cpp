#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
    freopen("test.txt","r",stdin);
	int i,n,l;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	if(n==1)
        cout<<"YES";
	for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i-1]==a[i]){
            cout<<"YES";
            break;
        }
	if(i==n)
    cout<<"NO";
	}
    return 0;
}
