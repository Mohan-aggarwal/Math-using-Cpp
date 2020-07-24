//finding mean deviation abt mean for a grouped data
#include<iostream.h>
#include<conio.h>
void md_g(void);
void md_g(void)
{
clrscr();
int x[15],f[15],fx[15],n,i=0,N=0;
float s=0,s1=0;
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
float a[15],af[15];//a=|x(i)-x(bar)|
float xbar=s/N;
for(i=0;i<n;++i)
{
a[i]=x[i]-xbar;
if(a[i]<0)
a[i]*=(-1);
af[i]=a[i]*f[i];
s1+=af[i];
}
clrscr();
cout<<"a(i)=|x(i)-x(bar)|"<<endl;
for(i=0;i<=59;i++)
{
cout<<"_";//making a line
}
cout<<"\nx(i)\tf(i)\tf(i)x(i)\ta(i)\ta(i)f(i)"<<endl;
for(i=0;i<=59;i++)
{
cout<<"_";//making a line
}
cout<<"\n";
for(i=0;i<n;++i)
{
cout<<x[i]
    <<"\t"<<f[i]
    <<"\t"<<fx[i]
    <<"\t\t"<<a[i]
    <<"\t"<<af[i]<<endl;
}
for(i=0;i<=59;i++)
{
cout<<"_";//making a line
}
cout<<"\n\t"<<N<<"\t"<<s<<"\t\t\t"<<s1<<endl;
for(i=0;i<=59;i++)
{
cout<<"_";//making a line
}
float md=s1/N;
cout<<"\nx(bar)="<<xbar<<endl
<<"MD[x(bar)]="<<md;
getch();
}

