#include<bits/stdc++.h>
using namespace std;
char a[100005];
int main(){
    freopen("test.txt","r",stdin);
    int t,p=0;
    cin.getline(a,1000005);
    for(t=0;a[t]!='\0';t++);
    for(int k=0;k<=t;k++){
        int i;
        for(i=0;(i<k/2)&&(a[i]==a[k-i-1]); i++);
        if(i!=k/2){
            if(p<k)
                p=k;
        }
    }
    cout<<p;
    return 0;
}
