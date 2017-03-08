#include<bits/stdc++.h>
using namespace std;
int a[20],b[20];
int main(){
    freopen("test.txt","r",stdin);
    int t,i;
    cin>>t;
    for(int j=0;j<t;j++){
        scanf("%d",&a[j]);
    }
    for(int k=0;k<t;k++){
        scanf("%d",&b[k]);
    }
    sort(a,a+t);
    sort(b,b+t);
    for(i=0;i<t;i++){
        if(a[i]<b[i]){
            cout<<"NO";
            break;
        }
    }
    if(i==t)
    cout<<"YES";
}
