#include<bits/stdc++.h>
using namespace std;
int a[101];
int l=0;

void merge1(int A[ ] , int start, int mid, int e);
void merge_sort (int A[ ] , int start , int e );
int main(){
    freopen("test.txt","r",stdin);
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
	}
	merge_sort(a,0,n);
	cout<<l;
    return 0;
}
void merge_sort (int A[ ] , int start , int e ){
           if( start < e ) {
           int mid = (start + e ) / 2 ;
           merge_sort (A, start , mid ) ;
           merge_sort (A,mid+1 , e ) ;
           for(int i=start;i<e;i++){
                for(int j=start;j<i;j++)
                    if(j<i && A[j]>A[i])
                    l++;
    }
           merge1(A,start , mid , e );

        }
}
void merge1(int A[ ],int start,int mid,int e){
    int p = start, q = mid+1;
    int Arr[e-start+1] , k=0;
    for(int i=start;i<=e;i++){
        if(p>mid)
        Arr[k++]=A[q++] ;
        else if(q>e)
        Arr[k++]=A[p++];
        else if(A[p]<A[q]){
        Arr[k++]=A[p++];
        }
        else
        Arr[ k++ ] = A[ q++];
    }
    for (int p=0 ; p< k ;p ++) {
     A[ start++ ] = Arr[ p ] ;
    }
}
