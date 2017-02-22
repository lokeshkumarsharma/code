#include<bits/stdc++.h>
using namespace std;
vector<int> c;
int main(){
    freopen("test.txt","r",stdin);
	int n,x,l;
	scanf("%d",&n);
	while(n--){
        c.clear();
        scanf("%d",&l);
        for(int i=0;i<l;i++){
            cin>>x;
            c.push_back(x);
        }
        sort(c.begin(),c.end(),greater<int>());
        for (int i = 0; i < c.size(); i++) {
            cout << c[i] << " ";
        }
            cout <<endl;
	}
    return 0;
}
