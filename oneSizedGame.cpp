#include<bits/stdc++.h>
using namespace std;
long long a[100000];
int main()
{
    freopen("test.txt","r",stdin);
	int n,l;
	scanf("%d",&n);
	while(n--){
        long long c=0;
        int t;
        scanf("%d",&l);
        for(int j=1;j<=l;j++){
            scanf("%lld",&a[j]);
        }
        while(1){
            long flag=0,p=0,q=0,s=0;
            c=*min_element(a+1,a+l+1);
            for(long i=1;i<=l;i++){
                if(a[i]==c){
                    t=i;
                    break;
                }
            }
            for(long i=1;i<=l;i++){
                a[i]=a[i]-t;
                if(a[i]>0)
                    q++;
                if(a[i]==0)
                    p++;
                if(a[i]<0)
                    s++;
                if(a[i]<=0)
                 flag++;
            }
            if((q==1||s==1)){
                cout<<"Ladia"<<endl;
                break;
            }
            if(s==l || flag==l){
                cout<<"Kushagra"<<endl;
                break;
            }
        }
    }
    return 0;
}
