#include<iostream>
using namespace std;
int main(){
    int N,k=0;
    long long M;
    cin>>N>>M;
    long long a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        if(a[i]==M)
            k=i;
    }
    if(k!=0)
    cout<<(k+1);
    else
    cout<<"-1";
    return 0;
}
