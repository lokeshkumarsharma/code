#include<bits/stdc++.h>
using namespace std;
int a[1000005],c=0;
int main(){
    int t,n;
    int p,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        int mid=a[i]>>1;
        cout<<mid;
    }
    return 0;
}
