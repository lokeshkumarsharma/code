#include<bits/stdc++.h>
using namespace std;
long a[105],k=0,aux[100001],s[105];
void countSort(long a[],long aux[],int n){
    for(long i=0;i<n;i++){
        k=max(k,a[i]);
    }
    for(long i=0;i<=k+1;i++){
        aux[i]=0;
    }
    for(long i=0;i<n;i++){
        aux[a[i]]++;
    }
    for(long i=0;i<=k+1;i++)
            cout<<i<<" "<<aux[i]<<endl;
    }
}
int main(){
    freopen("test.txt","r",stdin);
	long n;
	scanf("%ld",&n);
	for(long i=0;i<n;i++){
        scanf("%ld",&a[i]);
	}
	countSort(a,aux,n);
    return 0;
}
