#include<bits/stdc++.h>
using namespace std;
int a[1000005],c=0;
int main(){
    freopen("test.txt","r",stdin);
    int t,n;
    int p,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
    scanf("%d",&t);
    while(t--){
        c=0;
        scanf("%d%d",&p,&b);
        if(p==0){
            if(a[n]<b){
                cout<<"0"<<endl;
            }else if(b<a[1])
                cout<<n<<endl;
            else{
                for(int i=1;i<=n;i++){
                    if(a[i]>=b)
                        c++;
                }
                cout<<c<<endl;
            }
        }
        if(p==1){
            if(a[n]<b){
                cout<<"0"<<endl;
            }else if(b<a[1])
                cout<<n<<endl;
            else{
            for(int i=1;i<=n;i++){
                if(a[i]>b)
                    c++;
            }
            cout<<c<<endl;
            }
        }

    }
    return 0;
}
