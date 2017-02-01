#include<bits/stdc++.h>
using namespace std;
int a[10005];
int top=-1;
void push_element(int c){
    top++;
    a[top]=c;
}
void pop_element(){
    if(top!=-1){
        top--;
    }
}
int main(){
    freopen("test.txt","r",stdin);
	int n,l,r,m=0,p=1,t=0,k=0;
	bool cnt=false;
	scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        push_element(a[i]);
    }
    while(top!=-1){
        l=a[top];
        pop_element();
        if(l<0){
            for(int i=0;i<=top;i++){
                if(abs(l)==a[i])
                    if((top+1-i)>m)
                        m=top+2-i;
                    cnt=true;
            }
        }
    }
    if(cnt==true)
        cout<<m;
    return 0;
}

