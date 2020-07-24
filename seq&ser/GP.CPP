#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<process.h>
void main()
{
textbackground(8);
textcolor(14);
clrscr();
int n;
float a,r,i=1;
cout<<"Enter the following values:"
    <<"\nFirst term, a=";
cin>>a;
r:cout<<"Common Ratio, r=";
cin>>r;
n:cout<<"Number of the term, n=";
cin>>n;
if(n==0||n<0)
{
cout<<"`n' can't be 0 or less than 0!!\nEnter Again\n";
goto n;
}
cout<<"\nGP=";//now showing GP
for(int c=0;c<n;c++)
{
cout<<a*i;
i*=r;
if(c+1==n)
break;
cout<<",";
}
float
r1=r-1,
r2=1-r,
s,
rn=pow(r,n),
gm=a*sqrt(rn),
p;
int e=((n*(n+1))/2);
if(!r)
{
cout<<"\n`r' can't be 0!!";
goto r;
}
//calcuating sum
else if(r==1)
{
s=a*n;
cout<<"\n\nSum="<<s;
}
else if(r>0)
{
s=(a*(rn-1)/r1);
cout<<"\n\nsum="<<a<<"("<<r<<"^["<<n<<"]-1)/("<<r<<"-1)="<<s;
}
else if(r<0)
{
s=(a*(1-rn)/r2);
cout<<"\n\nsum="<<a<<"(1-"<<r<<"^"<<n<<")/1-"<<r<<"="<<s;
}
//product of GP
p=(pow(a,n))*(pow(r,e));
cout<<"\n\nProduct="<<a<<"^["<<n<<"]"<<r<<"^["<<n<<"("<<n<<"+1)/2]="<<p;
//GM of GP
cout<<"\n\nGM=square root of("<<a<<"^[2]"<<r<<"^["<<n<<"])="<<gm;
getch();
}