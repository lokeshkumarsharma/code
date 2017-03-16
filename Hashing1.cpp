#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string mn="abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
    freopen("test.txt","r",stdin);
    int t,n,j,p;
    string exm;
    scanf("%d",&t);
    t=t+1;
    while(t--){
        n=0;
        j=0;
        p=1;
        getline(cin,exm);
        for(int i=0;i<exm.length();i++){
            //if(exm[i].contains" ")
                if (!isspace(exm[i])){
                n=n+j+mn.find(exm[i]);
                j++;
                }
                else{
                    j=0;
                    p++;
                }
        }
        if(n!=0)
        cout<<p*n<<endl;
    }
    return 0;
}
