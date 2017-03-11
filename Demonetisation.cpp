#include<bits/stdc++.h>
using namespace std;
int a[100000],m=0;
int main()
{
    freopen("test.txt","r",stdin);
	int n;
	scanf("%d",&n);
		int c=1;
        for(int i=0;i<n;i++){
        	scanf("%d",&a[i]);
        	if(m<=a[i]){
        	}
            else{
				++c;
            }
                m=a[i];
        }
		cout<<c;
    return 0;
}
