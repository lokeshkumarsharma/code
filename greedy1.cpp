#include<bits/stdc++.h>
using namespace std;
long a[10000005];
int main(){
    freopen("test.txt","r",stdin);
    long t,m,n,tot=0;
    scanf("%ld",&t);
    while(t--){
            scanf("%ld%ld",&n,&m);
        for(long i=1;i<=n;i++){
            scanf("%ld",&a[i]);
        }
        sort(a+1,a+n+1);
        long k=1,p=0;
        tot=0;
        for(int i = 1;i <=n;i++)
    {
        tot+=a[i];
        if(tot > m)
            break;
        p++;
    }
        cout<<p<<endl;
    }
    return 0;
}
