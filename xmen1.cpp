#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,n;
float x,y,sx=0,sy=0,sxy=0,sxx=0,syy=0,mx,my,sdx,sdy,cxy,r,vx,vy;
cout<<"Enter the no of pairs";
cin>>n;
for(i=1;i<=n;++i)
{
cout<<"\nEnter X"<<i<<" : ";
cin>>x;
sx+=x;
sxx+=(x*x);
cout<<"\nEnter Y"<<i<<" : ";
cin>>y;
sy+=y;
syy+=(y*y);
sxy+=(x*y);
}
mx=sx/n;
my=sy/n;
vx=(sxx/n)-(mx*mx);
vy=(syy/n)-(my*my);
sdx=sqrt(vx);
sdy=sqrt(vy);
cxy=(sxy/n)-(mx*my);
r=cxy/(sdx*sdy);
cout<<"correlation coefficient:"<<r;
return 0;
}
