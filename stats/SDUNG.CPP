//finding std deviation for an ungrouped data
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include"sort.h"
void sd_ug(void);
void sd_ug(void)
{
clrscr();
int n,s=0,i,x[20],d[20],m,c,h;
cout<<"n= ";
cin>>n;
cout<<"enter data:\n";

for(i=0;i<n;++i)
cin>>x[i];

sort(x,n);//this is my defined fuction which is in sort.cpp

m=n/2;
if(n%2==0)
m-=1;
c=x[m];
h=x[1]-x[0];

for(i=0;i<n;++i)
d[i]=(x[i]-c)/2;

clrscr();
cout<<"n="<<n<<endl;

for(i=0;i<n;++i)
s+=d[i];

float xbar=c+((float)s/n)*h;;

cout<<"\nx(bar)="<<xbar<<"\nassumed mean="<<c<<endl
<<"a(i)=|x(i)-x(bar)|\n";

float a[20],asq[20],sum=0;//a=|x(i)-x(bar)|

for(i=0;i<n;++i)
{
a[i]=x[i]-xbar;
asq[i]=pow(a[i],2);
sum+=asq[i];
}
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\nx(i)\td(i)\ta(i)\t[a(i)]^2"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n";
for(i=0;i<n;++i)
{
cout<<x[i]<<"\t"
    <<d[i]<<"\t"
    <<a[i]<<"\t"
    <<asq[i]<<endl;
}
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n\t"<<s<<"\t\t"<<sum<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
float var=sum/n,sd=sqrt(var);
cout<<"\nVariance="<<var
<<"\nStandatd deviation= "<<sd;
getch();
}