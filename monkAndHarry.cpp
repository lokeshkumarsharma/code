#include<bits/stdc++.h>
using namespace std;
vector<string> c;
int main(){
    freopen("test.txt","r",stdin);
	int n,x,t=0,w=0;
	string z;
	scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>z;
        c.push_back(z);
    }
    for(int i=0;i<c.size();i++){
        t=0;
        for(int j=i-1;j>=0;j--){
            if(c[i]>c[j])
                t++;
        }
        cout<<t<<endl;
    }
    return 0;
}
