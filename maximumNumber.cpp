#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    freopen("test1.txt","r",stdin);
    string exm;
    getline(cin,exm);
    int m=0;
    char k;
        for(char c =' ';c <= '~';++c)
        {
            int frequency = 0;
            for(int i = 0;i < exm.length();++i){
                if(exm[i]==c)
                    frequency++;
                if(m<frequency){
                m=frequency;
                k=exm[i];
                }
            }
        }
        cout <<k<<" "<<m<< endl;
    return 0;
}
