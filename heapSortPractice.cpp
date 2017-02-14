#include<bits/stdc++.h>
using namespace std;
int a[100006],k,m1=0,m2=0,m3=0;
int main()
{
    freopen("test.txt","r",stdin);
	long n;
	scanf("%ld",&n);
	for(long i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>m3 && a[i]>m2 && a[i]>m1){
            m1=m2;
            m2=m3;
            m3=a[i];

        }
        else if(a[i]<m3 && a[i]>m2 && a[i]>m1){
            m1=m2;
            m2=a[i];
        }
        else if(a[i]<m3 && a[i]<m2 && a[i]>m1)
            m1=a[i];
        else{

        }
    if(i>=2){
        printf("%d %d %d",m3,m2,m1);
        printf("\n");
    }
    else
    cout<<"-1"<<endl;
	}
}
