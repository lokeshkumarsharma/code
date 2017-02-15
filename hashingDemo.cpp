#include<bits/stdc++.h>
using namespace std;
struct hashing{
        long h;
        string s;
}H[100000];
long q[10000];
int main(){
    freopen("test.txt","r",stdin);
	long n,l;
	scanf("%d",&n);
	for(long i=0;i<n;i++){
        scanf("%ld",&H[i].h);
        cin>>H[i].s;
	}
	cin>>l;
	for(long i=0;i<l;i++){
        scanf("%ld",&q[i]);
        for(long j=0;j<n;j++){
            if(q[i]==H[j].h){
                cout<<H[j].s<<endl;
            }
        }
	}
    return 0;
}
