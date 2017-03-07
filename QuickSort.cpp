#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
long partition ( long long A[],long start ,long end) {
    long i = start + 1;
    long piv = A[start] ;
    for(long j =start + 1; j <= end ; j++ )  {
          if ( A[ j ] < piv) {
                 swap (A[ i ],A [ j ]);
            i += 1;
        }
   }
   swap ( A[ start ] ,A[ i-1 ] ) ;
   return i-1;
}
void quick_sort ( long long A[ ] ,long start , long end ) {
   if( start < end ) {
         long piv_pos = partition (A,start , end );
         quick_sort (A,start , piv_pos -1);
         quick_sort ( A,piv_pos +1 , end) ;
   }
}
int main(){
    freopen("test.txt","r",stdin);
	long n;
	scanf("%ld",&n);
	for(long i=0;i<n;i++){
        scanf("%lld",&a[i]);
	}
	quick_sort(a,0,n-1);
	for(long i=0;i<n;i++){
        printf("%lld",a[i]);
	}
    return 0;
}
