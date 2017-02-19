#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int s[1500];
int find3Numbers(int arr_size)
{
    int l,r,c=1;
    for (int i=1;i<=arr_size-2;i++)
    {
        l=i+1;
        r=arr_size-1;
        while(l<r)
        {
            if(i+l+r==arr_size)
            {
                s[c]=i;
                s[c+1]=l;
                s[c+2]=r;
                c=c+3;
             break;
            }
            else if(i+l+r<arr_size)
                l++;
            else
                r--;
        }
    }
    return c;
}
int main(){
int n,l;
cin>>n;
l=find3Numbers(n);
for(int i=1;i<=l;i++){
    cout<<s[i]<<" ";
    if(i%3==0)
    cout<<endl;
}
    return 0;
}
