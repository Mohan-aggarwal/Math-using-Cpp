//finding mean deviation abt median for an ungrouped data
#include<iostream.h>
#include<conio.h>
#include"sort.h"
void md_med_ug(void);
void md_med_ug(void)
{
clrscr();
int n,i,j,temp,x[20];
cout<<"n= ";
cin>>n;
cout<<"enter data:\n";
for(i=0;i<n;++i)
cin>>x[i];

sort(x,n);

clrscr();
cout<<"n="<<n<<endl;
cout<<"x(i)=";
for(i=0;i<n;++i)
{
cout<<x[i];
if(i+2>n)
break;
cout<<",";
}

int m,M;
if(n%2!=0)
{m=(n+1)/2;m-=1;M=x[m];}
else if(n%2==0)
{int m1=(m+1)/2,
m2=n/2,M1,M2;
m1-=1;
m2-=1;
M1=x[m1];
M2=x[m2];
M=(M1+M2)/2;}

int med=M;
cout<<"\nMedian(M)="<<med;
float a[20],s=0;//a=|x(i)-Median|
for(i=0;i<n;++i)
{
a[i]=x[i]-med;
if(a[i]<0)
a[i]*=(-1);
}
for(i=0;i<n;++i)
s+=a[i];
cout<<"\n|x(i)-M|=";
for(i=0;i<n;++i)
{
cout<<a[i];
if(i+2>n)
break;
cout<<",";
}
float md=s/(float)n;
cout<<"\nSum of |x(i)-M|="<<s;
cout<<"\nMean deviation= "<<md;
getch();
}
