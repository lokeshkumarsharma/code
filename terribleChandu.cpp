#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("test.txt","r",stdin);
    int t,p=0,k=0;
    cin>>t;
    string a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t-1;i++){
    k++;
        for(int j=i+1;j<t;j++){
            if(a[i][0]==a[j][0] && a[i][a[i].length()-1]==a[j][a[j].length()-1]){
                sort(a[i].begin(),a[i].end());
                sort(a[j].begin(),a[j].end());
                if(a[i]==a[j]){
                    p++;
                    a[j]="1pk"+i;
                    break;
                }
            }
        }
    }
    cout<<p;
    return 0;
}
