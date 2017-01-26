#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int main()
{
    freopen("test.txt","r",stdin);
	int n,l,d,b,k;
	scanf("%d",&n);
	while(n--){
        int c=0;
        scanf("%d",&l);
        for(int i=0;i<l;i++){
            for(int j=0;j<l;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(int p=l-1;p>=0;p--){
            for(int q=l-1;q>=0;q--){
                for(int i=0;i<l;i++){
                    for(int j=0;j<l;j++){
                        if(a[i][j]>a[p][q] && i<=p && j<=q)
                            c++;
                    }
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
