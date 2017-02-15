#include<bits/stdc++.h>
using namespace std;
char a[100005];
int main(){
    freopen("test.txt","r",stdin);
    int t=0,p=0,l=0;
    cin>>a;
    for(char b='a';b<='z';b++){
    t=0;
        for(int i=0;a[i]!='\0';i++){
            if(a[i]==b){
                t++;
                //cout<<t<<endl;
            }
        }
        if(t>1)
        p=p+(t-1);
    }
    cout<<p;
    return 0;
}
