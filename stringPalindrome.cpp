#include<bits/stdc++.h>
using namespace std;
string a,b;
int main(){
    freopen("test.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        cin>>a;
        b=a;
        reverse(b.begin(),b.end());
        if(a.compare(b)){
            cout<<"NO"<<" "<<endl;
        }else{
            cout<<"YES"<<" ";
            if(a.size()&1)
                cout<<"ODD"<<endl;
            else
                cout<<"EVEN"<<endl;
        }
    }
}
