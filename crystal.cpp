#include<bits/stdc++.h>
using namespace std;
long a[1000005];
int minCoins(long coins[], long m, int V)
{
   if (V == 0) return 0;
   int res = INT_MAX;
   for (long i=1; i<=m; i++)
   {
     if (coins[i] <= V)
     {
         int sub_res = minCoins(coins, m, V-coins[i]);
         if (sub_res != INT_MAX && sub_res + 1 < res)
            res = sub_res + 1;
     }
   }
   return res;
}
int main(){
    freopen("test.txt","r",stdin);
    int t,n;
    long m;
    scanf("%d",&t);
    while(t--){
        scanf("%ld",&m);
        scanf("%d",&n);
        for(long i=1;i<=n;i++){
            scanf("%ld",&a[i]);
        }
        if(minCoins(a,n,m)==INT_MAX)
        cout<<"-1";
        else
        cout<<minCoins(a,n,m)<<endl;
    }
    return 0;
}
