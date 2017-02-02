#include<bits/stdc++.h>
using namespace std;
int a[100006],b[100000];
int main(){
    freopen("test.txt","r",stdin);
	int n,m,k=0;
	long t=0;
	scanf("%d",&n);
	for(long i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
	for(long i=0;i<m;i++){
        scanf("%d",&b[i]);
        k=0;
        t=0;
        for(int j=1;j<=n;j++){
            t+=a[j];
            if(b[i]==t||b[i]<t){
                k=j;
                cout<<k<<endl;
                break;
            }
        }
        if(k==0)
            cout<<"-1"<<endl;
    }
}
