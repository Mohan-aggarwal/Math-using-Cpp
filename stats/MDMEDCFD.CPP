//finding mean deviation abt median for continuous freqency distribution
#include<iostream.h>
#include<conio.h>
void md_med_cfd(void);
void md_med_cfd(void)
{
clrscr();
int x[15],f[15],cf[15],l,h,n1,n,i,N=0;
float s=0;

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
cout<<l<<"   ";
if(l-h==n1)
break;
cin>>f[i];
n=i+1;
}

for(i=0;i<n+1;++i)
l-=h;

for(i=0;i<n;++i)
x[i]=(2*l+(2*i+1)*h)/2;

for(i=0;i<n;++i)
N+=f[i];

cf[0]=f[0];
for(i=0;i<n;++i)
cf[i+1]=cf[i]+f[i+1];

float a[15],af[15];//a=|x(i)-M|
float med,num,c,M=N/2,m=n/2,L,feq;
if(n%2==0)
m-=1;
c=cf[m-1];
feq=f[m];

for(i=1;i<=m;++i)
{l+=h;
L=l;}
num=(M-c)*h;
med=L+(num/feq);

for(i=1;i<=m;++i)
l-=h;

for(i=0;i<n;++i)
{
a[i]=x[i]-med;
if(a[i]<0)
a[i]*=(-1);
af[i]=a[i]*f[i];
s+=af[i];
}
clrscr();
cout<<"a(i)=|x(i)-M|\nM=median="<<med
<<"\nfreqency="<<feq
<<"\nlower limit="<<L
<<"\nC="<<c
<<"\nM="<<M
<<"\nx(i)=[(upper class)-(lower class)]/2"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\nClasses\tx(i)\tf(i)\tf(i)x(i)\ta(i)\ta(i)f(i)"<<endl;
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
    <<"\t"<<cf[i]
    <<"\t\t"<<a[i]
    <<"\t"<<af[i]<<endl;
}
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n\t\t\t"<<N<<"\t\t\t"<<s<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
float md=s/N;
cout<<"\nMD(M)="<<md;
getch();
}