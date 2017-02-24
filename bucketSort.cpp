#include<bits/stdc++.h>
using namespace std;
int a[100006],m=0;
void bucketSort(int n)
{
    vector<int> b[n];
    for (int i=0; i<n; i++){
       int bi=__builtin_popcount(a[i]);
       if(m<bi)
       m=bi;
       b[bi].push_back(a[i]);
    }
    for (int i=0; i<=m; i++){
    if(b[i].size()!=0){
        sort(b[i].begin(),b[i].end());
        for(int j=0;j<b[i].size();j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
   }
    for (int i=0; i<n; i++)
       sort(b[i].begin(), b[i].end());
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
          a[index++] = b[i][j];
}
int main(){
    freopen("test.txt","r",stdin);
	long n;
	scanf("%ld",&n);
	for(long i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bucketSort(n);
}
