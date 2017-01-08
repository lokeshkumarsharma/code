#include<bits/stdc++.h>
using namespace std;
int a[100];
long x=0;
void bubble_sort( int A[ ], int n ) {
    int temp;
    for(int k = 0; k< n-1; k++) {
        for(int i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
                x++;
            }
        }
    }
}
int main(){
    freopen("test.txt","r",stdin);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	cout<<x;
    return 0;
}
