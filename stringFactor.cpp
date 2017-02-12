#include<bits/stdc++.h>
using namespace std;
char a[100005];
int main(){
    freopen("test.txt","r",stdin);
    int i=0,n,j=0,l;
    char p;
    cin>>n;
    for(l=0;l<n;l++)
        scanf("%c",&a[l]);
    a[l]='\0';
    //cin>>a;
    //for(int k=0;k<a.length();k++)
    while(j<=n){
        if(a[j]>a[i]){
            p=a
            i++;
        }
        j++;
    }
    //puts(a);
    return 0;
}
