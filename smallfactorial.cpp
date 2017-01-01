#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long factorial(long n)
{
return n <= 1 ? 1 : n*factorial(n-1);
}
int main(){
int n;
cin>>n;
int a[n];
long long f;
for (int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    f=0;
    f=factorial(a[i]);
    cout<<f<<endl;
}
    return 0;
}
