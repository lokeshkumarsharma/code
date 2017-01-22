#include<bits/stdc++.h>
using namespace std;
int a[101];
void selection_sort (int A[ ], int n,int x) {
        int minimum;
        for(int i = 1; i <=n-1 ; i++)  {
             minimum = i ;
            for(int j = i+1; j<=n ; j++ ) {
                if(A[ j ] < A[ minimum ])  {
                minimum = j ;
                }
             }
          swap ( A[ minimum ], A[ i ]) ;
          if(i==x)
          break;
        }
   }
int main(){
    freopen("test.txt","r",stdin);
	int n,x;
	scanf("%d%d",&n,&x);
	for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
	}
	selection_sort(a,n,x);
	for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
	}
    return 0;
}
