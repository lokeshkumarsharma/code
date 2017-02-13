#include<bits/stdc++.h>
using namespace std;
int a[101];
void insertion_sort ( int A[ ] , int n)
{
     for( int i = 0 ;i < n ; i++ ) {
      int temp = A[ i ];
      int j = i;
          while(  j > 0  && temp < A[ j -1]) {
                A[ j ] = A[ j-1];
                j= j - 1;
           }
           A[ j ] = temp;
           cout<<temp<<" ";
     }
}
int main(){
    freopen("test.txt","r",stdin);
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
    return 0;
}
