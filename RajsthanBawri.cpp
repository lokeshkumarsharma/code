#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("test.txt","r",stdin);
	int px,py,bx,by,n;
	scanf("%d",&n);
	while(n--){
        scanf("%d%d%d%d",&px,&py,&bx,&by);
        if((px>bx&&py>by)||(px>by&&py>bx))
            printf("Possible\n");
        else
            printf("Not Possible\n");
	}
    return 0;
}
