#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,l;
cin>>n>>m>>l;
char w='\0';
int k=1,p;
for (int i=1;i<=n;i++){
    for(int j=1;j<=(2*m);j++){
        if(k==l){
        if(k%2==0)
            w='R';
        else
            w='L';
        if(j%2==0)
            p=j/2;
        else
            p=j/2+1;
        cout<<i<<" "<<p<<" "<<w;
        }
        k++;
    }
}
    return 0;
}
