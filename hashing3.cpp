#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005];
int main(){
    freopen("test.txt","r",stdin);
    int n,sum,num,m=0,k=0,h=0;
    int p=0,c=0;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
        num = a[j];
            sum=0;
        while (num != 0){
            sum = sum + num % 10;
            num = num / 10;
        }
        b[j]=(a[j]^sum);
        p=max(p,b[j]);
    }
        int si=p+1;
        int freq[si];
        for(int i = 0; i<=si ; i++)
            freq[i] = 0;
        for(int i = 0; i<n; i++)
            freq[b[i]]++;
        c=*max_element(freq,freq+si);
        for(int i = 0; i<=si; i++){
            if(c!=1){
                if(freq[i]==c){
                h=i;
                    if(m>=i)
                        m=i;
                    k++;
                }
            }
            if(c==1){
                cout<<*max_element(b,b+n)<<" "<<"0";
                break;
            }
        if(m>1)
        cout<<m<<" "<<c-1<<endl;
        }
        if(k>1)
        cout<<m<<" "<<c-2+k<<endl;
        if(k==1)
        cout<<h<<" "<<c-1<<endl;

    return 0;
}



