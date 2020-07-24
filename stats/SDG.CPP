//finding std deviation for a grouped data
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
void sd_g(void);
void sd_g(void)
{
clrscr();
int x[15],f[15],fx[15],n,i=0,N=0;
long double s=0,sum=0;
cout<<"n=";
cin>>n;
cout<<"enter data:\n";
for(i=0;i<n;++i)
{
cout<<"\nx("<<i+1<<")=";
cin>>x[i];
cout<<"f("<<x[i]<<")=";
cin>>f[i];
}
for(i=0;i<n;++i)
{
N+=f[i];
fx[i]=x[i]*f[i];
s+=fx[i];
}
float a[15],asq[15],fasq[15];//a=|x(i)-x(bar)|,sq is for square
float xbar=s/N;
for(i=0;i<n;++i)
{
a[i]=x[i]-xbar;
asq[i]=pow(a[i],2);
fasq[i]=f[i]*asq[i];
sum+=fasq[i];
}
clrscr();
cout<<"a(i)=|x(i)-x(bar)|"<<endl
<<"s(i)=[a(i)]^2\n";
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\nx(i)\tf(i)\tf(i)x(i)\ta(i)\t[a(i)]^2  s(i)f(i)"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n";
for(i=0;i<n;++i)
{
cout<<x[i]
    <<"\t"<<f[i]
    <<"\t"<<fx[i]
    <<"\t\t"<<a[i]
    <<"\t"<<asq[i]
    <<"\t  "<<fasq[i]<<endl;
}
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n\t"<<N<<"\t"<<s<<"\t\t\t\t  "<<sum<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line

float var=sum/N,sd=sqrt(var);
cout<<"\nx(bar)="<<xbar<<endl
<<"Variance="<<var
<<"\nStandard Deviation="<<sd;
getch();
}