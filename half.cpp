#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,k=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        int p=s[i].length();
        for(int j=0;j<=p;j=j+2)
        {
            if(j<=k){
            cout<<s[i].at(j);
            }
        }
        cout<<"\n";
        k=k+2;
    }
    return 0;
}
