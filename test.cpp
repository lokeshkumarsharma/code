#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{
    freopen("test.txt","r",stdin);
	int n,l,d,b,k;
	long q;
	char[10000] tmp;
	char m='a';
	scanf("%d%ld",&n,&q);
    scanf("%s",a);
	while(q--){
        scanf("%d%d%d",&d,&b,&k);
        m=a[d];
        for(int i=d;i<=b;i++){
            if(a[i]<m)
                m=a[i];
        }
        cout<<m;
	}
    return 0;
}
