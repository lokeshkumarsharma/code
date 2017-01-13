#include<bits/stdc++.h>
using namespace std;


double func(double x)
{
return 2*x*x-12*x+7;
}
double ts(double start, double end)
{
    double l = start, r = end;

    for(int i=0; i<200; i++) {
      double l1 = (l*2+r)/3;
      double l2 = (l+2*r)/3;
      if(func(l1)<func(l2)) r = l2; else l = l1;
      }

     double x = l;
    return func(x);
}
int main(){
    freopen("test.txt","r",stdin);
	long x,y;
	long n;
	scanf("%ld",&n);
	while(n--){
        scanf("%ld%ld",&x,&y);
        printf("%.0lf\n",ts(x,y));
	}
    return 0;
}
