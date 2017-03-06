#include<bits/stdc++.h>
using namespace std;
char a[25];
int main(){
    freopen("test.txt","r",stdin);
    int t,m,n,p=1;
    cin>>t;
    while(t--){
    cin>>a;
    scanf("%d%d",&m,&n);
    sort(a+m,a+n+1,greater());
    puts(a);
    }
}
