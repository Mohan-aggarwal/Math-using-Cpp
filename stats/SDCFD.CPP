//finding std deviation for continuous freqency distribution
#include<iostream.h>
#include<conio.h>
#include<math.h>
void sd_cfd(void);
void sd_cfd(void)
{
clrscr();
int x[15],f[15],fx[15],l,h,n1,n,i,N=0;
float s=0,sum=0;
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
l-=h;//geting the original value of l(lowest limit)
for(i=0;i<n;++i)
x[i]=(2*l+(2*i+1)*h)/2;
for(i=0;i<n;++i)
{
N+=f[i];
fx[i]=x[i]*f[i];
s+=fx[i];
}
float a[15],asq[15],fasq[15];//a=|x(i)-x(bar)|
float xbar=s/N;
for(i=0;i<n;++i)
{
a[i]=x[i]-xbar;
asq[i]=pow(a[i],2);
fasq[i]=f[i]*asq[i];
sum+=fasq[i];
}
clrscr();
cout<<"a(i)=|x(i)-x(bar)|"
<<"\nx(i)=[(upper class)-(lower class)]/2"<<endl
<<"s(i)=[a(i)]^2"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\nClasses\t"
<<"  x(i)\tf(i)\tf(i)x(i)"
<<"a(i)"
<<"\t[a(i)]^2"
<<"\ts(i)f(i)"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n";
for(i=0;i<n;++i)
{
cout<<l<<"-";
l+=h;
cout<<l
    <<"\t  "<<x[i]
    <<"\t"  <<f[i]
    <<"\t"  <<fx[i]
    <<"\t"  <<a[i]
    <<"\t"  <<asq[i]
    <<"\t"  <<fasq[i]
	    <<endl;
}
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n\t\t"<<N<<"\t\t"<<s<<"\t\t"<<sum<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
float var=sum/N,sd=sqrt(var);
cout<<"\nx(bar)="<<xbar<<endl
<<"Variation="<<var<<endl
<<"Standard deviation="<<sd;
getch();
}