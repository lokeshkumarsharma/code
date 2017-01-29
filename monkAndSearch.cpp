#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int binary(int low,int high,int key){
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
    int t,n;
    int p,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&p,&b);
        if(p==0){
            int k=binary(1,n,b);
            if(k==-1)
                cout<<"0"<<endl;
            else
                cout<<k-1<<endl;
        }
        if(p==1){
        int k=binary(1,n,b);
            if(k==-1)
                cout<<"0"<<endl;
            else
                cout<<n-k<<endl;
        }
    }
    return 0;
}
