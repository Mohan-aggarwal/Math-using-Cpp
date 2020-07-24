//STC-shortcut
//CFD-continuous freqency distribution
//SD-std deviation
//finding std deviation for continuous freqency distribution
#include<iostream.h>
#include<conio.h>
#include<math.h>
void sd_stc_cdf(void);
void sd_stc_cdf(void)
{
clrscr();
int x[15],f[15],fx[15],l,h,n1,n,i,N=0;
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
for(i=0;i<n;++i)
x[i]=(2*l+(2*i+1)*h)/2;
for(i=0;i<n;++i)
N+=f[i];

int m=n/2,A,y[15],sqy[15],fiy[15],fisqy[15];
float sumfiyi=0,sumfisqyi=0;

if(n%2==0)
{m-=1;}
A=x[m];

for(i=0;i<n;++i)
{
y[i]=((x[i]-A)/h);
sqy[i]=pow(y[i],2);
fiy[i]=f[i]*y[i];
sumfiyi+=fiy[i];
fisqy[i]=f[i]*sqy[i];
sumfisqyi+=fisqy[i];
}

float xbar=A+((sumfiyi*h)/N);
clrscr();
cout<<"\nx(i)=[(upper class)-(lower class)]/2"<<endl
<<"s(i)=[a(i)]^2"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\nClass\t"
<<"x(i)\tf(i)\tf(i)x(i)"
<<"a(i)"
<<"\t[a(i)]^2"
<<"\ts(i)f(i)"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n";
for(i=0;i<n;++i)
{
cout      <<l
    <<"-";  l+=h;
cout      <<l
    <<"\t"<<x[i]
    <<"\t"<<f[i]
    <<"\t"<<y[i]
    <<"\t"<<sqy[i]
    <<"\t"<<fiy[i]
    <<"\t"<<fisqy[i]
	  <<endl;
}
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n\t\t"<<N<<"\t\t\t"<<sumfiyi<<"\t"<<sumfisqyi<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
float
sqfiyi=pow(sumfiyi,2),
sqh=pow(h,2),
sqN=pow(N,2),
sqhbysqN=sqh/sqN,
var=sqhbysqN*((N*sumfisqyi)-sqfiyi),
sd=sqrt(var);
cout<<"\nx(bar)="<<xbar<<endl
<<"A="<<A<<endl
<<"Variance="<<var<<endl
<<"Standard deviation="<<sd;
getch();
}