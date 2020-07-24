//finding mean deviation abt median for a grouped data
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x[15],f[15],list[100],n,i,j,N=0;
float s=0,a[15],af[15];
cout<<"n=";
cin>>n;
cout<<"\nEnter data:\n";

for(i=0;i<n;++i)
{
cout<<"\nx("<<i+1<<")=";
cin>>x[i];
cout<<"f("<<x[i]<<")=";
cin>>f[i];
}

int cf[15];//this cf is our cumulative frequency
cf[0]=f[0];
for(i=0;i<n;++i)
{
cf[i+1]=cf[i]+f[i+1];
N+=f[i];
}

int m=N/2;
double M;
if(N%2==0)
{
for(i=0;i<n;++i)
{
if(m>cf[i]&&m<cf[i+1])
M=(x[i+1]+x[i+1])/2;
}
}
else if(N%2!=0)
{
for(i=0;i<n;++i)
{
if(m>cf[i]&&m<cf[i+1])
M=x[i];
}
}

for(i=0;i<n;++i)
{
a[i]=x[i]-M;
if(a[i]<0)
a[i]*=(-1);
af[i]=a[i]*f[i];
s+=af[i];
}

clrscr();
cout<<"a(i)=|x(i)-M|\nM=median"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\nx(i)\tf(i)\tC.f.\ta(i)\ta(i)f(i)"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n";
for(i=0;i<n;++i)
{
cout<<x[i]
    <<"\t"<<f[i]
    <<"\t"<<cf[i]
    <<"\t"<<a[i]
    <<"\t"<<af[i]<<endl;
}
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n\t"<<N<<"\t\t\t"<<s<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line}
float md=s/N;
cout<<"\nMedian="<<M<<endl
<<"\nMD[M]="<<md;
getch();
}
