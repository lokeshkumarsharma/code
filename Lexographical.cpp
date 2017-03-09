#include<bits/stdc++.h>
using namespace std;
struct fan{
    int q;
    string str;
}f[25];
int main(){
    freopen("test.txt","r",stdin);
    char str[10][22];
    int t,p,m;
    cin>>t>>p;
    for(int i=0; i<t; ++i){
        cin>>f[i].str;
        scanf("%d",&f[i].q);
    }
    int temp;

    for(int k = 0; k< t-1; k++) {
        for(int i = 0; i < t-k-1; i++) {
            if(f[i].q > f[i+1].q) {
                temp = f[i].q;
                f[i].q = f[i+1].q;
                f[i+1].q = temp;
                f[i].str.swap(f[i+1].str);
            }
            if(f[i].q==f[i+1].q) {
                if(lexicographical_compare(f[i].str.begin(),f[i].str.end(),f[i+1].str.begin(),f[i+1].str.end()))
                f[i].str.swap(f[i+1].str);
            }
        }
    }
    for(int i=t-1;i>t-1-p; i--)
    {
     cout<<f[i].str<<endl;
    }
        return 0;
}
