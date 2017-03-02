#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    freopen("test1.txt","r",stdin);
    int t,frequency,m=0;
    string s;
    scanf("%d",&t);
    getline(cin,s);
    while(t--){
        m=0;
        getline(cin,s);
        for(char c='a';c<='z';++c)
        {
            frequency = 0;
            for(int i = 0;i < s.length();++i){
                if(s[i] == c)
                    frequency++;
                    if(m<frequency)
                    m=frequency;
                }
            }
            if(m>1)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    return 0;
}
