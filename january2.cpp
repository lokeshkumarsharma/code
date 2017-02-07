#include<bits/stdc++.h>
using namespace std;
int a[20][1000005];
int main(){
    freopen("test.txt","r",stdin);
    int t=0,n,m,p=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        p=0;
            for(int k=0;k<n;k++){
                for(int l=0;l<m;l++){
                    if(k!=i){
                        if(l!=j){
                            p=p^a[k][l];
                        }
                    }
                }
            }
            if(t<p)
            t=p;
        }
    }
    cout<<t;
    cout<<(2^5^8);
    return 0;
}
