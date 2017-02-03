#include<bits/stdc++.h>
using namespace std;
long long a[100000],m;
int main()
{
    freopen("test.txt","r",stdin);
	long n,l;
	scanf("%ld",&n);
	while(n--){
		int count=1;
		scanf("%ld",&l);
		scanf("%lld",&a[0]);
		m=a[0];
        for(long i=1;i<l;i++){
        	scanf("%lld",&a[i]);
        	if(m>=a[i])
				m=a[i];
        	if(a[i-1]>=a[i] && m>=a[i])
				count++;
        }
        cout<<count<<endl;
	}
    return 0;
}
