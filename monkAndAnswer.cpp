#include<bits/stdc++.h>
using namespace std;
long long a[100000];
int main()
{
    freopen("test.txt","r",stdin);
	long n,l,c=0,flag=0;
	scanf("%ld%ld",&n,&l);
	for(long i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(a[i]<=l){
            if(flag>1)
                break;
            else
                c++;
        }
        else{
            flag++;
        }
	}
    cout<<c<<endl;
    return 0;
}
