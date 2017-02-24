#include<bits/stdc++.h>
using namespace std;

template< size_t A, size_t B >
struct GCD {
    enum { value = GCD< B, A % B >::value };
};

template< size_t A >
struct GCD<A,0> {
    enum { value = A };
};
int main(){
    freopen("test.txt","r",stdin);
	int x,y,n,t=0;
	scanf("%d%d%d",&x,&y,&n);
	for(int i=x;i<=y;i++){
        for(int j=x;j<=y;j++){
            if(r-l<(1000*g))
            if((GCD<12, 18>::value)==n)
            t++;
        }
	}
	cout<<t<<endl;
    return 0;
}
