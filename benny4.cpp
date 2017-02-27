#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
    freopen("test.txt","r",stdin);
	int n,m,t=0,l,r,x;
	scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    while(m--){
        t=0;l=0;r=0;x=0;
        scanf("%d%d%d",&l,&r,&x);
	    for(int j=l;j<=r;j++){
            t=t+(a[j]%x);
	    }
	    cout<<t<<endl;
    }
    return 0;
}
