#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
    freopen("test.txt","r",stdin);
    int t,m,n,p=1,cnt=0;
    char r;
    cin>>t;
    while(t--){
        cin>>a;
        r=a[0];
        for(int i=0;i<a.size();i++){
           if(r!=a[i])
           cnt++;
        }
           if(cnt>=4)
           cout<<"YES"<<endl;
        }
    }
    return 0;
}

