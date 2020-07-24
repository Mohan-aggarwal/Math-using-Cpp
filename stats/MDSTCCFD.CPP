//STC-shortcut
//CFD-continuous freqency distribution
//MD-mean deviation
//finding mean deviation abt mean for continuous freqency distribution
#include<iostream.h>
#include<conio.h>
void md_stc_cfd(void);
void md_stc_cfd(void)
{
clrscr();
int x[15],f[15],d[15],fid[15],l,h,n1,n,i,N=0;
float sum=0,sumd=0;
cout<<"Lowest limit=";
cin>>l;
cout<<"Highest limit=";
cin>>n1;
cout<<"Class size=";
cin>>h;
cout<<"\nEnter data:\n";
for(i=0;;++i)
{
cout<<l<<"-";
l+=h;
cout<<l<<"\t";
if(l-h==n1)
break;
cin>>f[i];
n=i+1;
}
for(i=0;i<n+1;++i)
l-=h;//geting the original value of l(lowest limit)
float a[15],aif[15];//a=|x(i)-x(bar)|
float m=n/2,A;
if(n%2==0)
{m-=1;}
for(i=0;i<n;++i)
x[i]=(2*l+(2*i+1)*h)/2;
A=x[m];
for(i=0;i<n;++i)
{
d[i]=((x[i]-A)/h);
sumd+=d[i];
fid[i]=f[i]*d[i];
}
for(i=0;i<n;++i)
N+=f[i];

float xbar=A+((sumd*h)/N);
for(i=0;i<n;++i)
{
a[i]=x[i]-xbar;
if(a[i]<0)
a[i]*=(-1);
aif[i]=a[i]*f[i];
sum+=aif[i];
}
clrscr();
cout<<"x(i)=[(upper class)-(lower class)]/2\n"
<<"d(i)=[x(i)-"<<A<<"]/"<<h<<endl
<<"v(i)=f(i)d(i)\n"
<<"a(i)=|x(i)-x(bar)|\n"
<<"s(i)=a(i)f(i)\n";
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\nClasses x(i)\tf(i)\td(i)\tv(i)\ta(i)\ts(i)"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n";
for(i=0;i<n;++i)
{
cout<<l<<"-";
l+=h;
cout<<l
    <<"\t"<<x[i]
    <<"\t"<<f[i]
    <<"\t"<<d[i]
    <<"\t"<<fid[i]
    <<"\t"<<a[i]
    <<"\t"<<aif[i]<<endl;
}
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n\t\t"<<N<<"\t\t"<<sumd<<"\t\t"<<sum<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
float md=sum/N;
cout<<"\nx(bar)="<<xbar<<endl
<<"A="<<A<<endl
<<"MD[x(bar)]="<<md;
getch();
}
