#include<bits/stdc++.h>
using namespace std;
int a[1005],k=0;
void print_each_digit(int x)
{
    if(x >= 10)
       print_each_digit(x / 10);
    int digit = x % 10;
    if(digit==2)
        k=4;
    if(digit==1 && k==4)
        k=5;
}
int main(){
    freopen("test.txt","r",stdin);
	int n,m;
	scanf("%d",&n);
	for(long i=0;i<n;i++){
        scanf("%d",&a[i]);
        k=0;
        print_each_digit(a[i]);
        if(k==5||a[i]%(21)==0)
            cout<<"The streak is broken!"<<endl;
        if(k==4 || k==0||a[i]%21!=0)
            cout<<"The streak lives still in our heart!"<<endl;
    }
    return 0;
}
