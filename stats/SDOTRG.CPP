//OTR-other
//SD-std deviation
//G-grouped data
//finding std deviation for a grouped data
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
void sd_otr_cfd(void);
void sd_otr_cfd(void)
{
clrscr();
int x[15],f[15],fix[15],sqx[15],fisqx[15],n,i=0,N=0;
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
fix[i]=x[i]*f[i];
s+=fix[i];
sqx[i]=pow(x[i],2);
fisqx[i]=f[i]*sqx[i];
sum+=fisqx[i];
}
clrscr();
cout<<"s(i)=f(i)x(i)\n"
<<"a(i)=[x(i)]^2\n"
<<"v(i)=f(i)([x(i)]^2)\n";
for(i=0;i<=49;i++)
cout<<"_";//making a line
cout<<"\nx(i)\tf(i)\ts(i)\ta(i)\tv(i)"<<endl;
for(i=0;i<=49;i++)
cout<<"_";//making a line
cout<<"\n";
for(i=0;i<n;++i)
{
cout  <<x[i]
<<"\t"<<f[i]
<<"\t"<<fix[i]
<<"\t"<<sqx[i]
<<"\t"<<fisqx[i]
      <<endl;
}
for(i=0;i<=49;i++)
cout<<"_";//making a line
cout<<"\n\t"<<N<<"\t"<<s<<"\t\t"<<sum<<endl;
for(i=0;i<=49;i++)
cout<<"_";//making a line

float sqfixi=pow(s,2),sd=(sqrt((N*sum)-(sqfixi)))/N;
cout<<endl<<"Standard Deviation="<<sd;
getch();
}