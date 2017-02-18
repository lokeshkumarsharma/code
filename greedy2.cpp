#include<bits/stdc++.h>
using namespace std;
char a[1000005];
int main(){
    freopen("test.txt","r",stdin);
    int t,l;
    char p;
    scanf("%d",&t);
    //t=t+1;
    while(t--){
        //cin.getline(a,1000005);
        cin>>a;
        //for(l=0;a[l]!='\0';l++);
            p=a[0];
                cout<<a[0];
        for(int k=1;k<l;k++){
            if(a[k]!=p){
                p=a[k];
                cout<<a[k];
            }
        }
        cout<<endl;
    }
    return 0;
}
