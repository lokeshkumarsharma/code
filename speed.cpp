#include<bits/stdc++.h>
using namespace std;
long long a[100000];
int main()
{
	freopen("test.txt","r",stdin);
	long n,l;
	scanf("%ld",&n);
	while(n--){
		int count=1;
		scanf("%ld",&l);
        for(long i=0;i<l;i++){
        	scanf("%lld",&a[i]);
        }
        for(long i=0;i<l;i++){
        	if(a[i]>a[i+1])
				count++;
        }
        cout<<count<<endl;
	}
    return 0;
}
