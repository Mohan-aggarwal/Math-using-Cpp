//finding mean deviation abt mean for continuous freqency distribution
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x[15],f[15],fx[15],l,h,n1,n,i,N=0;
float s=0,s1=0;
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
for(i=0;i<n;++i)
l-=h;
for(i=0;i<n;++i)
x[i]=(2*l+(2*i+1)*h)/2;
for(i=0;i<n;++i)
x[i]-=h;
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
cout<<"a(i)=|x(i)-x(bar)|\nx(i)=[(upper class)-(lower class)]/2"<<endl;
for(i=0;i<=59;i++)
{
cout<<"_";//making a line
}
cout<<"\nClasses\t\tx(i)\tf(i)\tf(i)x(i)\ta(i)\ta(i)f(i)"<<endl;
for(i=0;i<=59;i++)
{
cout<<"_";//making a line
}
l-=h;
cout<<"\n";
for(i=0;i<n;++i)
{
cout<<l<<"-";
l+=h;
cout<<l
    <<"\t\t"<<x[i]
    <<"\t"<<f[i]
    <<"\t"<<fx[i]
    <<"\t\t"<<a[i]
    <<"\t"<<af[i]<<endl;
}
for(i=0;i<=59;i++)
{
cout<<"_";//making a line
}
cout<<"\n\t\t\t"<<N<<"\t\t\t"<<s<<"\t"<<s1<<endl;
for(i=0;i<=59;i++)
{
cout<<"_";//making a line
}
float md=s1/N;
cout<<"\nx(bar)="<<xbar<<endl
<<"MD[x(bar)]="<<md;
getch();
}