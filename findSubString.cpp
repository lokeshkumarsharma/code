#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    freopen("test.txt","r",stdin);
    char a[500],b[500];
    int l1,l2,c1=0,c2=0,i=0,j=0;
    scanf("%[^\n]s",b);
    scanf("%[^\n]s",a);
    l1=strlen(b);
    l2=strlen(a);
    cout<<l2<<endl;
    for(i=0;i<l2;){
        c1=0;
        j=0;
        while((a[i]==b[j])){
            i++;
            j++;
            c1++;
        }
        if(c1==l1){
            c2++;
            cout<<c2;
            c1=0;
        }
        else{
            i++;
        }
    }
    cout<<c2;
    return 0;
}
