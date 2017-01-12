#include<bits/stdc++.h>
using namespace std;
long long q[10000000];
int main() {
    freopen("test.txt","r",stdin);
    long long n;
    long long m=0,x,y;
    scanf("%lld",&n);
    for(long long i=1; i<=n; i++) {
        scanf("%lld",&q[i]);
        if(q[i-1]==q[i])
            m++;
    }
    for(long long k=1; k<=n; k++) {
        if(m==n) {
            printf("-2 ");
        } else {
            x=0;
            y=0;
            if(k==1)
                x=-1;
            else {
                for(long long c=k-1; c>=1; c--)
                    if(q[c]>q[k]) {
                        x=c;
                        break;
                    }
                if(x==0)
                    x=-1;
            }
            if(k==n)
                y=-1;
            else {
                for(long long c=k+1; c<=n; c++)
                    if(q[c]>q[k]) {
                        y=c;
                        break;
                    }
                if(y==0)
                    y=-1;
            }
            printf("%lld ",x+y);
        }
    }
    return 0;
}
