#include<bits/stdc++.h>
using namespace std;
long long a[100000];
long binarySearch(long low,long high,long long key)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;
 }
int main(){
    freopen("test.txt","r",stdin);
	long n;
	long long x,l;
	scanf("%ld",&n);
	for(long i=1;i<=n;i++){
        scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1);
	cin>>x;
	for(long i=1;i<=x;i++){
        scanf("%lld",&l);
        printf("%ld\n",binarySearch(1,n,l));
	}
    return 0;
}
