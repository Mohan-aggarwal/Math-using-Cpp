	/* ==============  Program Description  ============= */
	/*   program name : ***.cpp                           */
	/*   author : Mr. Mohan Aggarwal                      */
	/*   (what are the program aims/objectives??)         */
	/* ================================================== */

#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<string.h>
#include<iomanip.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

struct complex
{
float real,imag;
};
complex num1,num2;

/*1*/
void complexch();
float find_thita(float a,float b);
void total(complex num1,complex num2);
void difference(complex num1,complex num2);
void multiply(complex num1,complex num2);
void division(complex num1,complex num2);

/*2*/
void binomialch();
long factorial(int);
long find_ncr(int, int);

/*3*/
void seqnseriesch();

/*4*/
void statsch();
int sort(int a[15],int n);
void md_ug();
void md_g();
void md_cfd();
void md_stc_cfd();
void md_med_ug();
void md_med_g();
double showMedian(int array[],int size);
//for calculating median of grouped data
void md_med_cfd();
void sd_ug();
void sd_g();
void sd_otr_g();
void sd_cfd();
void sd_stc_cfd();
//functions prototypes

/*
		-> ABBREVIATIONS USED IN FUNTIONS <-


*/

void main()
{
on_order:
clrscr();
cout<<"\n\nIn Maths we have:-"
<<"\n1>>Complex numbers & quadratic equations."
<<"\n2>>Binomial theorem."
<<"\n3>>Sequence & series."
<<"\n4>>Statistics.";
mch:cout<<"\n\n\tEnter your choice: ";
int mch;
cin>>mch;
switch(mch)
{
case 1:complexch();break;

case 2:binomialch();break;

case 3:seqnseriesch();break;

case 4:statsch();break;

default:
cout<<"\n You hve entered wrong number!!\n Again";
goto mch;
}
char order;
cout<<"\n\n Do u want to enter more??(y/n): ";
cin>>order;
if((order=='Y')||(order=='y'))
goto on_order;
else if((order=='N')||(order=='n'))
{
char ch1='x';
cout<<"\n\n Plese enter \"x\" for exit: ";
exit:cin>>ch1;
if(ch1=='x')exit(0);
else goto   exit;
}
getch();
}

//every function descriptions above function

void total(complex num1,complex num2)
{
complex sum;
sum.real=num1.real+num2.real;
sum.imag=num1.imag+num2.imag;
cout<<"\n\nSum of two complex number is= "
    <<sum.real<<"+("<<sum.imag<<"i)";
}
void difference(complex num1,complex num2)
{
complex sub;
sub.real=num1.real-num2.real;
sub.imag=num1.imag-num2.imag;
cout<<"\nSubtraction of two complex number is= "
    <<sub.real<<"+("<<sub.imag<<"i)";
}
void multiply(complex num1,complex num2)
{
complex prod;
prod.real=num1.real*num2.real;
prod.imag=num1.imag*num2.imag;
cout<<"\nMuluiplication of two complex number is= "
    <<prod.real<<"+("<<prod.imag<<"i)";
}
void division(complex num1,complex num2)
{
complex div;
float t;
char ch;
t=num1.real*num2.real+num1.imag*num2.imag;
div.real=(num1.real*num2.real+num1.imag*num2.imag)/t;
div.imag=(num1.imag*num2.real-num1.real*num2.imag)/t;
cout<<"\nDivision of two complex number is= "
    <<div.real<<"+("<<div.imag<<"i)";
}
float find_thita(float a,float b)
{
float alpha=atan(b/a),thita,pi=180;
if(((a>0)||(a<0))&&((b<=0)||(b>=0)))
	{
	if((a>0)&&(b>=0))
	thita=alpha;
	else if((a>0)&&(b<=0))
	thita=(-alpha);
	else if((a<0)&&(b>=0))
	thita=(pi-alpha);
	else if((a<0)&&(b<=0))
	thita=(-pi+alpha);
	}
	else if((a==0)&&((b>0)||(b<0)))
	{
	if(b>0)
	{
	thita=(pi/2);
	}
	else if(b<0)
	{
	thita=((3*pi)/2);
	}
	}
	return thita;
	}

long find_ncr(int n, int r)
{
long result;
result = factorial(n) / (factorial(r) * factorial(n - r));
return result;
}


long factorial(int n)
{
int c;
long result = 1;
for (c = 1; c <= n; c++)
result = result * c;
return (result);
}


//finding mean deviation abt mean for an ungrouped data
void md_ug()
{
clrscr();
int n,s=0,i,x[20];
cout<<"Number of observation= ";
cin>>n;
cout<<"Enter data:\n";
for(i=0;i<n;++i)
cin>>x[i];
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
for(i=0;i<n;++i)
s+=x[i];
float xbar=(float)s/n;
cout<<"\nx(bar)="<<xbar;
float a[20],s1=0;//a=|x(i)-x(bar)|
for(i=0;i<n;++i)
{
a[i]=x[i]-xbar;
if(a[i]<0)
a[i]*=(-1);
}
for(i=0;i<n;++i)
s1+=a[i];
cout<<"\n|x(i)-x(bar)|=";
for(i=0;i<n;++i)
{
cout<<a[i];
if(i+2>n)
break;
cout<<",";
}
float md=s1/(float)n;
cout<<"\nSum of |x(i)-x(bar)|="<<s1;
cout<<"\nMean deviation= "<<md;
getch();
}




//finding mean deviation abt mean for a grouped data
void md_g()
{
clrscr();
int x[15],f[15],fx[15],n,i=0,N=0;
float s=0,s1=0;
cout<<"Number of observation= ";
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




//finding mean deviation abt mean for continuous freqency distribution
void md_cfd()
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
cout<<l<<"\t";
if   (l-h==n1)
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
float a[15],af[15];//a=|x(i)-x(bar)|
float xbar=s/N;
for(i=0;i<n;++i)
{
a[i]=x[i]-xbar;
if(a[i]<0)
a[i]*=(-1);
af[i]=a[i]*f[i];
sum+=af[i];
}
clrscr();
cout<<"a(i)=|x(i)-x(bar)|"
<<"\nx(i)=[(upper class)-(lower class)]/2"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\nClass\t\tx(i)\tf(i)\tf(i)x(i)\ta(i)\ta(i)f(i)\nInterval"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
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
cout<<"_";//making a line
cout<<"\n\t\t\t"<<N<<"\t\t\t"<<s<<"\t"<<sum<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
float md=sum/N;
cout<<"\nx(bar)="<<xbar<<endl
<<"MD[x(bar)]="<<md;
getch();
}




//finding mean deviation abt mean for continuous freqency distribution
//by shortcut mehod
void md_stc_cfd()
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
cout<<"\nClass x(i)\tf(i)\td(i)\tv(i)\ta(i)\ts(i)\nInterval"<<endl;
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




//finding mean deviation abt median for an ungrouped data
void md_med_ug()
{
clrscr();
int n,i,j,temp,x[20];
cout<<"Number of observation= ";
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




//finding mean deviation abt median for a grouped data
void md_med_g()
{
clrscr();
int x[15],f[15],list[100],n,i,j,N=0;
float s=0,a[15],af[15];
cout<<"Number of observation= ";
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
cf[i+1]=cf[i]+f[i+1];
for(i=0;i<n;++i)
N+=f[i];

int m=N/2;
double M;
if(N%2==0)
{
for(i=0;i<n;++i)
{
if(m>cf[i]&&m<cf[i+1])//using a logical concept
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
for(I=0;I<N;++I)//for list[I]
cout<<list[I]<<endl;
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
cout<<"\nMedian="//<<M<<endl
<<"\nMD[M]="<<md;
getch();
}
double showMedian(int array[], int size)
{
int middle= size / 2.0;
double average, median;

if(size%2==0)
median = (array[middle] + array[middle + 1]) / 2.0;

else
median = array[middle] / 1.0;

return median;

}



//finding mean deviation abt median for continuous freqency distribution
void md_med_cfd()
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
cout<<"\nClass\tx(i)\tf(i)\tf(i)x(i)\ta(i)\ta(i)f(i)\nInterval"<<endl;
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



//finding std deviation for an ungrouped data
void sd_ug()
{
clrscr();
int n,s=0,i,x[20],d[20],m,c,h;
cout<<"Number of observation= ";
cin>>n;
cout<<"enter data:\n";

for(i=0;i<n;++i)
cin>>x[i];

sort(x,n);//this is my defined fuction which is in sort.cpp

m=n/2;
if(n%2==0)
m-=1;
c=x[m];
h=x[1]-x[0];

for(i=0;i<n;++i)
d[i]=(x[i]-c)/2;

clrscr();
cout<<"n="<<n<<endl;

for(i=0;i<n;++i)
s+=d[i];

float xbar=c+((float)s/n)*h;;

cout<<"\nx(bar)="<<xbar<<"\nassumed mean="<<c<<endl
<<"a(i)=|x(i)-x(bar)|\n";

float a[20],asq[20],sum=0;//a=|x(i)-x(bar)|

for(i=0;i<n;++i)
{
a[i]=x[i]-xbar;
asq[i]=pow(a[i],2);
sum+=asq[i];
}
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\nx(i)\td(i)\ta(i)\t[a(i)]^2"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n";
for(i=0;i<n;++i)
{
cout<<x[i]<<"\t"
    <<d[i]<<"\t"
    <<a[i]<<"\t"
    <<asq[i]<<endl;
}
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n\t"<<s<<"\t\t"<<sum<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
float var=sum/n,sd=sqrt(var);
cout<<"\nVariance="<<var
<<"\nStandatd deviation= "<<sd;
getch();
}



//finding std deviation for a grouped data
void sd_g()
{
clrscr();
int x[15],f[15],fx[15],n,i=0,N=0;
long double s=0,sum=0;
cout<<"Number of observation= ";
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
float a[15],asq[15],fasq[15];//a=|x(i)-x(bar)|,sq is for square
float xbar=s/N;
for(i=0;i<n;++i)
{
a[i]=x[i]-xbar;
asq[i]=pow(a[i],2);
fasq[i]=f[i]*asq[i];
sum+=fasq[i];
}
clrscr();
cout<<"a(i)=|x(i)-x(bar)|"<<endl
<<"s(i)=[a(i)]^2\n";
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\nx(i)\tf(i)\tf(i)x(i)\ta(i)\t[a(i)]^2  s(i)f(i)"<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n";
for(i=0;i<n;++i)
{
cout<<x[i]
    <<"\t"<<f[i]
    <<"\t"<<fx[i]
    <<"\t\t"<<a[i]
    <<"\t"<<asq[i]
    <<"\t  "<<fasq[i]<<endl;
}
for(i=0;i<=59;i++)
cout<<"_";//making a line
cout<<"\n\t"<<N<<"\t"<<s<<"\t\t\t\t  "<<sum<<endl;
for(i=0;i<=59;i++)
cout<<"_";//making a line

float var=sum/N,sd=sqrt(var);
cout<<"\nx(bar)="<<xbar<<endl
<<"Variance="<<var
<<"\nStandard Deviation="<<sd;
getch();
}



//finding std deviation for a grouped data without finding mean
void sd_otr_g()
{
clrscr();
int x[15],f[15],fix[15],sqx[15],fisqx[15],n,i=0,N=0;
long double s=0,sum=0;
cout<<"Number of observation= ";
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


//finding std deviation for continuous freqency distribution
void sd_cfd()
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
cout<<"\nClass\t"
<<"  x(i)\tf(i)\tf(i)x(i)"
<<"a(i)"
<<"\t[a(i)]^2"
<<"\ts(i)f(i)"
<<"\nInterval"
<<endl;
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



//finding std deviation
//for continuous freqency distribution by shortcut method
void sd_stc_cfd()
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
<<"\ts(i)f(i)"
<<"\nInterval"
<<endl;
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
<<"Assumed mean="<<A<<endl
<<"Variance="<<var<<endl
<<"Standard deviation="<<sd;
getch();
}
int sort(int a[15],int n)
{
int i=0,j,temp;
while(i<n-1)
{
j=i+1;
while(j<n)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
j++;
}
i++;
}
return a[15];
}
void complexch(void)
{
textbackground(15);
textcolor(9);
user_order://after asking user to enter more choice
clrscr();
cout<<"\t\t\t[COMPLEX NUMBERS & QUADRATIC EQUATIONS]\n"
<<"\n\nIs all about:-"
<<"\n1>>Power of iota."
<<"\n2>>Algebra of complex numbers."
<<"\n3>>Modulus, Conjugate & Argument of a complex number."
<<"\n4>>Polar & Eular form of a complex number."
<<"\n5>>Some Quadratic Equations with their complex roots."
<<"\n6>>Roots of Complex numbers."
<<"\n7>>Argand plane.";
int opt;
default0://after default case
cout<<"\n\n\tEnter your choice: ";
choice7://after case 7
cin>>opt;
switch(opt)
{
case 1:
on_order1:
clrscr();
int p1,i1,n1;
cout<<"\t\t\t[POWER OF IOTA(i)]\n"
<<"Enter any integer exponential value for i(iota) that is, i^n:\nn=";
cin>>n1;

n1%=4;
	if(n1>=0)
	{
		if(n1==0)
		cout<<"\nAnswer is 1";
		else if(n1==1)
		cout<<"\nAnswer is i";
		else if(n1==2)
		cout<<"\nAnswer is -1";
		else if(n1==3)
		cout<<"\nAnswer is -i";
	}
	else if(n1<=0)
	{
		if(n1==-1)
		cout<<"\nAnswer is -i";
		else if(n1==-2)
		cout<<"\nAnswer is -1";
		else if(n1==-3)
		cout<<"\nAnswer is i";
		else if(n1==0)
		cout<<"\nAnswer is 1";
	}
char order1;
cout<<"\nEnter more values??(y/n)[from option 1]: ";
cin>>order1;
if((order1=='Y')||(order1=='y'))
goto on_order1;
else if((order1=='N')||(order1=='n'))
goto exit;
break;//case 1 ends here

case 2:
on_order2:
clrscr();
cout<<"\t\t\t[ALGEBRA OF COMPLEX NUMBERS]\n"
	<<"\nEnter the real part of Ist complex number:"
	<<"\n[Re(z1)]=";
cin>>num1.real;
cout<<"\nEnter the imaginary part of Ist complex number:"
    <<"\n[Im(z1)]=";
cin>>num1.imag;
cout<<"\nEnter the real part of IInd complex number:"
    <<"\n[Re(z2)]=";
cin>>num2.real;
cout<<"\nEnter the imaginary part of IInd complex number:"
    <<"\n[Im(z2)]=";
cin>>num2.imag;
cout<<"\nSo,your two complex number are:"
    <<"\n z1="<<num1.real<<"+("<<num1.imag<<"i)"
    <<"\n z2="<<num2.real<<"+("<<num2.imag<<"i)";
total(num1,num2);
difference(num1,num2);
multiply(num1,num2);
division(num1,num2);
char order;
cout<<"\n\nDo u want to enter more??(y/n)[from option 2]: ";
cin>>order;
if((order=='Y')||(order=='y'))
{goto on_order2;}
else if((order=='N')||(order=='n'))
{goto exit;}
break;//case 2 ends here

case 3:
int ch;
float a3,b3,mod3,thita;
on_order3:
clrscr();
cout<<"\t\t[MODULUS, CONJUGATE & ARGUMENT OF A COMPLEX NUMBER]\n\n";
enter_ur_input3:
cout<<"Enter values for a & b, for making a complex number 'a+bi':\n";
cout<<"a=";
cin>>a3;
cout<<"b=";
cin>>b3;
cout<<"\nYour complex number is "<<a3<<"+("<<b3<<"i)\n";
cout<<"\nWhat do you wanted to with this??\n";
choice3:
    cout<<"\t1.Find its modulus\n"
	<<"\t2.Find its conjugate\n"
	<<"\t3.Find its argument\n"
	<<"\n\tEnter ur choice: ";
cin>>ch;
switch(ch)
{
case 1 :cout<<"\n\t| z |=Square root of("<<a3<<"^2 +"<<b3<<"^2)= ";
	mod3=sqrt(a3*a3+b3*b3);
	cout<<" Modulus = "<<mod3<<"\n";
	break;

case 2 :if(b3>0)
	cout<<"\n\tConjugate = "<<a3<<"-"<<b3<<"i\n";
	else if(b3<0)
	cout<<"\n\tConjugate = "<<a3<<"+"<<b3*(-1)<<"i\n";
	break;

case 3 :cout<<"\n\tArgument of ur complex number= ";
	if((a3==0)&&(b3==0))
	goto on_order3;
	else if(((a3>0)||(a3<0))&&((b3<=0)||(b3>=0)))
	{
	arg:
	thita=find_thita(a3,b3);
	cout<<thita<<endl;
	}
	else if((a3==0)&&((b3>0)||(b3<0)))
	{goto arg;}

	break;
default:cout<<"\n\tWarning! You can't enter more than that of 3 !\n";
	goto choice3;
//here break doesn`t work

} //end of switch case
char order3;
cout<<"\nDo u want to enter more??(y/n)[from option 3]: ";
cin>>order3;
if((order3=='Y')||(order3=='y'))
{goto on_order3;}
else if((order3=='N')||(order3=='n'))
{goto exit;}
break;//case 3 ends here

case 4:
float a4,b4,mod4;
on_order4:
clrscr();
cout<<"\t\t\t[POLAR & EULAR FORM]\n"
<<"Enter values for a & b, for making a complex number 'a+bi': "<<endl;
cout<<"a=";
cin>>a4;
cout<<"b=";
cin>>b4;
cout<<"Your complex number is "<<a4<<"+("<<b4<<"i)"<<endl;
mod4=sqrt(a4*a4+b4*b4);
if((a4==0)&&(b4==0))
goto on_order4;
else if(((a4>0)||(a4<0))&&((b4<=0)||(b4>=0)))
{
thita:
thita=find_thita(a4,b4);
cout<<"\nThe required `polar form' of your complex number "
<<a4<<"+("<<b4<<"i)"
<<" is "<<"\n"<<mod4<<"[cos("<<thita<<")+isin("
<<thita<<")]"<<endl;
cout<<"\nThe required `eular form' of your complex number "<<a4<<"+("<<b4<<"i)"
<<" is "<<"\n"<<mod4<<".e^("<<thita<<" i)"<<"\t\t(where, e=2.71828...)";
}
else if((a4==0)&&((b4>0)||(b4<0)))
{
goto thita;
}
char order4;
cout<<"\nDo u want to enter more??(y/n)[from option 4]: ";
cin>>order4;
if((order4=='Y')||(order4=='y'))
{goto on_order4;}
else if((order4=='N')||(order4=='n'))
{goto exit;}
break;//case 4 ends here

case 5:
on_order5:
clrscr();
float a5,b5,c5,root15,root25,D15,D25,i5;
cout<<"\t\t\t[QUADRATIC EQUATIONS]\n"
<<"enter three numbers a,b & c for "
    <<"ax^2 + bx + c=0 :\na=";
cin>>a5;
cout<<"b=";
cin>>b5;
cout<<"c=";
cin>>c5;
a5:
if(!a5)
{
	cout<<"Value of `a'should not be zero[0]!!"
	    <<"\nRE-ENTER the value of a:\na=";
	cin>>a5;
	goto a5;//re-entering & checking `a' again
}
else
 {
	D15=(b5*b5-4*a5*c5);
	D25=(4*a5*c5-b5*b5);

	if((D15>0)&&(D25<0))
	{
		root15=(-b5 + sqrt(D15))/(2*a5);
		root25=(-b5 - sqrt(D15))/(2*a5);
		cout<<"\n\t.'.Roots are REAL & UNEQUAL"<<"\n\n";
		cout<<"Root1= "<<root15<<"\n"
		    <<"Root2= "<<root25;
	}
	else if((D15==0)&&(D25==0))
	{
		root15=-b5/(2*a5);
		cout<<"\n\t.'.Roots are REAL & EQUAL"<<"\n\n";
		cout<<"Root1= "<<root15<<"\n"
		    <<"Root2= "<<root15;
	}
	else if((D15<0)&&(D25>0))
	{
		root15=((-b5 + sqrt(D25))/(2*a5));
		root25=((-b5 - sqrt(D25))/(2*a5));
		cout<<"\n\t.'.Roots are COMPLEX & IMAGINARY"<<"\n\n";
		cout<<"Root1= "<<root15<<"i\n"
		    <<"Root2= "<<root25<<"i";
	}
 }
char order5;
cout<<"\n\nDo u want to enter more??(y/n)[from option 5]: ";
cin>>order5;
if((order5=='Y')||(order5=='y'))
{goto on_order5;}
else if((order5=='N')||(order5=='n'))
{goto exit;}

break;//case 5 ends here

case 6:
on_order6:
clrscr();
float a6,b6,T6,x6,y6;
cout<<"\t\t\t[ROOTS OF COMPLEX NUMBERS]\n"
<<"Enter values of a & b to makeout a complex number:\na=";
cin>>a6;
cout<<"b=";
cin>>b6;
T6=sqrt((a6*a6)+(b6*b6));
x6=sqrt((T6+a6)/2);
y6=sqrt((T6-a6)/2);

if(b6>=0)
{
cout<<"Ur complex number is: "<<a6<<"+"<<b6<<"i";
cout<<"\nThe square roots of the above complex number:\nRoot#1="
<<x6<<"+"<<y6<<"i\nRoot#2=-"<<x6<<"-"<<y6<<"i";
}
else if(b6<0)
{
cout<<"Ur complex number is: "<<a6<<b6<<"i";
cout<<"\nThe square roots of the above complex number: \nRoot#1="
<<x6<<"-"<<y6<<"i \nRoot#2=-"<<x6<<"+"<<y6<<"i";
}
char order6;
cout<<"\n\nDo u want to enter more??(y/n)[from option 6]: ";
cin>>order6;
if((order6=='Y')||(order6=='y'))
{goto on_order6;}
else if((order6=='N')||(order6=='n'))
{goto exit;}
break;//case 6 ends here

case 7:
cout<<"\nSorry! Argand plane is not available yet!"
<<"`.'grahics not available\n"
<<"\nRe-enter your chioce: ";
goto choice7;

default:
cout<<"\nWarning! you can't enter more than that of 7 !\nAgain,\n";
goto default0;
}//end of switch case
exit:
clrscr();
char order;
cout<<"Play it agian??(y/n): ";
cin>>order;
if((order=='Y')||(order=='y'))
goto user_order;

}
void binomialch(void)
{
textbackground(9);
textcolor(3);

int n,r,ch;
long ncr;
float cofa,cofb;
r1:
clrscr();
cout<<"\t\t\t\t[BINOMIAL THEOREM]\n";
cout<<"Enter the values of A,B & n for (Ax + By)^n:\n";
r:cout<<"A= ";
cin>>cofa;
cout<<"B= ";
cin>>cofb;
cout<<"n=";
cin>>n;
cout<<"So, your expression is :"
<<"[("<<cofa<<")x + ("<<cofb<<")y]^"<<n<<"\n\n\t";
default1:
cout<<"What do u want to do with this?? \n\t"
	<<"1.)Expand it \n\t"
	<<"2.)Find a term \n\t"
	<<"3.)Find middle term of expansion\n\t"
	<<"4.)Restart again\n\n\t"
	<<"Enter ur choice: ";
cin>>ch;
cout<<"\n\n=";
switch(ch)
{
case 1:

if(n==0)
{
cout<<"1";
break;
}


if((cofa==0)&&(cofb==0))
{
cout<<"\nNo expansion for this expression!\nAgain enter,\n";
goto r;
}
if(cofa>0)//when A is +ve
{
		for(r=0;r<=n;++r)
		{
		ncr = find_ncr(n,r);
		if(cofb>0)//& B is also +ve
		{
cout<<"["<<ncr*(pow(cofa,n-r))*(pow(cofb,r))
<<"x^("<<n-r<<")y^("<<r<<")]";
		 if(r+1>n)
		 break;
		 cout<<"+";
		}
		else if(cofb<0)//B is -ve
		{
		for(r=0;r<=n;++r)
		{
		ncr = find_ncr(n,r);
cout<<"["<<ncr*(pow(cofa,n-r))*(pow(cofb,r))
<<"x^("<<n-r<<")y^("<<r<<")]";
		++r;
		if(r>n)
		break;
		ncr = find_ncr(n,r);
cout<<"-["<<ncr*(pow(cofa,n-r))*(pow(cofb,r))*(-1)
<<"x^("<<n-r<<")y^("<<r<<")]";
		if(r+1>n)
		break;
		cout<<"+";

		}
		}

}
}


else if(cofa<0)//when A is -ve
{
if(cofb>0)//& B is +ve
{
for(r=0;r<=n;++r)
{
ncr = find_ncr(n,r);
cout<<"["<<ncr*(pow(cofa,n-r))*(pow(cofb,r))
<<"x^("<<n-r<<")y^("<<r<<")]";
++r;
if(r>n)
break;
ncr = find_ncr(n,r);
cout<<"-["<<ncr*(pow(cofa,n-r))*(pow(cofb,r))*(-1)
<<"x^("<<n-r<<")y^("<<r<<")]";
if(r+1>n)
break;
cout<<"+";
}
}
else if(cofb<0)//& b is also -ve
{
for(r=0;r<=n;++r)
{
ncr = find_ncr(n,r);
cout<<"["<<ncr*(pow(cofa,n-r))*(pow(cofb,r))
<<"x^("<<n-r<<")y^("<<r<<")]";
if(r==n)
break;
cout<<"+";
}
}
}


else if(cofa==0)//considering a=0
{
if(cofb>0)//b is +ve
{
cout<<pow(cofb,n)<<"y^("<<n<<")";
}
else if(cofb<0)//b is -ve
{
cout<<pow(cofb,n)<<"y^("<<n<<")";
}
}


if(((cofa>0)||(cofa<0))&&(cofb==0))//now,consider b=0
{
if((cofa>0)&&(cofb==0))//a is +ve
cout<<pow(cofa,n)<<"x^("<<n<<")";
else if((cofa<0)&&(cofb==0))//a is -ve
{
cout<<pow(cofa,n)<<"y^("<<n<<")";
}

break;//case 1 ends here


case 2://find a term
if(n==0)
{
cout<<"1";
break;
}
float term,ncp;
renter2:
cout<<"Number of the term=\nT(r+1)=";
cin>>r;
if(r>n)
{
cout<<"Ohh-no! value of r should be lesser than n !\n";
goto renter2;
}
int p=r-1;
ncp=(factorial(n)/(factorial(p)*factorial(n-p)));
term=(ncp*pow(cofa,n-p)*pow(cofb,p));
cout<<term<<"x^("<<n-p<<")y^("<<p<<")";
break;//case 2 ends here
case 3://mid term
if(n==0)
{
cout<<"1";
break;
}
if(n%2==0)
{
r=(n/2)+1;
ncr = find_ncr(n,r);
cout<<ncr*pow(cofa,n-r)*pow(cofa,r)
<<"x^("<<n/2<<")y^("<<n/2<<")";
}
else if(n%2!=0)
{
int
r1=(n+1)/2,
r2=(n+3)/2;
float ncr1,ncr2;
ncr1=find_ncr(n,r1);
cout<<ncr1*pow(cofa,n-r1)*pow(cofa,r1)
<<"x^("<<(n-1)/2<<")y^("<<(n+1)/2<<") \n& \n";
cout<<ncr1*pow(cofa,n-r2)*pow(cofa,r2)
<<"x^("<<(n+1)/2<<")y^("<<(n-1)/2<<")";
}
break;//case 3 ends here

case 4:
goto r1;//for restart
default:cout<<"Warning! u can't  enter more than that of '3'\nAgain,";
goto default1;
}//end for switch case
}
char order;
cout<<"\n\nDo u want to goto the menu again??(y/n): ";
cin>>order;
if((order=='Y')||(order=='y'))
{
clrscr();
cout<<"\t\t\t\t[BINOMIAL THEOREM]\n";
cout<<"Your expression is :"
<<"[("<<cofa<<")x + ("<<cofb<<")y]^"<<n<<"\n\n\t";
goto default1;
}
}

void seqnseriesch(void)
{
textbackground(8);
textcolor(14);
float x1,x;
int t,ch;
on_order:
clrscr();
cout<<"\t\t\t\t[SEQUENCES & SERIES]\n"
    <<"\n\tIs all about:-"
    <<"\n\t1>>Different Progressions"
    <<"\n\t2>>Various Series";
defaultmain:
cout<<"\n\n\tEnter your choice: ";
    int IstChoice;
    cin>>IstChoice;

switch(IstChoice)
{
case 1:
cout<<"\n\tDifferent Progressions is all about:-"
    <<"\n\t1>>Arithmetic Progression"
    <<"\n\t2>>Geometric Progression";
default1:
cout<<"\n\n\tEnter your choice: ";
int onp;
cin>>onp;
switch(onp)
{
case 1://AP
clrscr();
int n;
float a,d,i=0;
cout<<"\n Enter the following values:"
    <<"\n\n First term,\n a=";cin>>a;
d:
cout<<" Common Diffrence,\n d=";cin>>d;
nap:
cout<<" Number of the term,\n n=";cin>>n;
if(n==0||n<0)
{
cout<<"\n `n' can't be 0 or less than 0!!\n Enter Again\n";
goto nap;
}
cout<<"\n AP=";//now showing AP
for(int c=0;c<n;c++)
{
cout<<a+i;
i+=d;
if(c+1==n)
break;
cout<<",";
}
int nth=n-1,nby2=n/2;
cout<<"\n\n sum=("<<n<<"/2)[2x"<<a<<"+"<<n-1<<"x"<<d<<"]="<<nby2*(2*a+nth*d);
cout<<"\n\n AM=(2x"<<a<<"+"<<n-1<<"x"<<d<<")/2="<<(2*a+nth*d)/2;
break;//case 1 ends here of AP
case 2://GP
clrscr();
float r;
i=1;
cout<<"\n Enter the following values:";
cout<<"\n\n First term,\n a=";
cin>>a;
r:cout<<" Common Ratio,\n r=";
cin>>r;
ngp:cout<<" Number of the term,\n n=";
cin>>n;


if(!a)
{
cout<<"\n `a' can't be 0!!\n Again!\n a=";
cin>>a;
}
if(!r)
{
cout<<"\n `r' can't be 0!!";
goto r;
}
if(!n||n<0)
{
cout<<"\n `n' can't be 0 or less than 0!!\n Enter Again\n";
goto ngp;
}
float
r1=r-1,
r2=1-r,s,
rn=pow(r,n);
int ri=r;
float diff=r-ri;

cout<<"\n GP= ";//now showing GP
for(c=0;c<n;c++)
{
cout<<a*i;
i*=r;
if(c+1==n)
break;
cout<<",";
}


//calcuating sum
if(r==1)
{
s=a*n;
cout<<"\n\n Sum upto "<<n<<"= "<<s;
}

else if(r>0)
{
s=(a*(rn-1)/r1);
cout<<"\n\n Sum upto "<<n<<"= "<<a<<"({"<<r<<"}^("<<n
<<")-1)/({"<<r<<"}-1)= "<<s;
if(diff!=0.0)//sum of infintity
{
s=a/r2;
cout<<"\n\n Sum of infinity, S="<<a<<"/(1-{"<<r<<"})= "<<s
<<"\t\tif, n->infinity & |r|<1";
}
}
else if(r<0)
{
s=(a*(1-rn)/r2);
cout<<"\n\n Sum upto "<<n<<"= "<<a<<"[1-{"<<r<<"}^("<<n
<<")]/[1-{"<<r<<"}]= "<<s;
if(diff!=0.0)//sum of infintity
{
s=a/r2;
cout<<"\n\n Sum upto infinity, S= "<<a<<"/(1-"<<r<<")= "<<s
<<"\tif, n->infinity & |r|<1";
}
}

//GM of GP
if(r<0&&n%2!=0)
rn*=(-1);
float gm=a*sqrt(rn);
cout<<"\n\n GM=square root of[{"<<a<<"}^(2) x {"<<r<<"}^("<<n<<")]="<<gm;
break;//case 2 ends here of GP
default:
cout<<"\n Warning! you can't enter more than that of 2!!\nAgain\n";
goto default1;
}
break;//case 1 ends here of progression
case 2://various series
cout<<"\n Enter the value of 'x' to have the various series:\nx=";
renter:cin>>x1;

x=(x1*3.14/180);

cout<<"\t What u want to find??";
default2:
cout<<"\n\t 1.)Sine series (finite series)"
    <<"\n\t 2.)Cosine series (finite series)"
    <<"\n\t 3.)Logarithimic series (infinite series)"
    <<"\n\t 4.)Exponential series (infinite series)";
infiniteseries:
cout<<"\n\n\t Enter ur choice: ";
cin>>ch;
switch(ch)
{
case 1:
//sin[x] series
cout<<"\n "<<x1<<" Degrees= "<<x<<" Radians\n";
cout<<" sin("<<x<<" Radians)="<<sin(x)<<"= \n";
cout<<"\n "<<x1;
t=3;
for(int i=3;i<=x1,t<=x1;++i)
{
cout<<"-("<<x1<<"^"<<t<<"/"<<t<<"!)";
t+=2;
if(t>x1)
break;
cout<<"+("<<x1<<"^"<<t<<"/"<<t<<"!)";
t+=2;
}

break;//case 1 ends here

case 2:
//cos[x] series
cout<<"\n "<<x1<<" Degrees= "<<x<<" Radians\n";
cout<<" cos("<<x<<" Radians)="<<cos(x)<<"= \n";
cout<<"\n 1";
t=2;
for(i=2;i<=x1,t<=x1;++i)
{
cout<<" -("<<x1<<"^"<<t<<"/"<<t<<"!)";
t+=2;
if(t>x1)
break;
cout<<" +("<<x1<<"^"<<t<<"/"<<t<<"!)";
t+=2;
}
break;//case 2 ends here

case 3:
//log[x] series
cout<<" log("<<x1<<")="<<log(x)<<"= \n";
cout<<"\n "<<x1;
t=2;
int p;
p=x1-1;
for(i=2;i<=t;++i)
{
cout<<" -("<<p<<"^"<<t<<"/"<<t<<"!)";
t+=1;
if(t>100)//`.'log[x] has its infinite series
break;
cout<<" +("<<p<<"^"<<t<<"/"<<t<<"!)";
t+=1;
}
cout<<"...";
break;//case 3 ends here

case 4:
//e^[x] series

if(x1>=100)
{
expx:
cout<<" We recommend that `x' should be less than that of 100"
    <<" \nfor Exponential series\nSo, enter again\nx= ";
int x2;
cin>>x2;
if(x2>=100)
goto expx;
	cout<<" e^("<<x2<<")="<<exp(x)<<"= \n";
	cout<<"\n 1";
	t=1;
	for(i=1;i<=t;++i)
	 {
	 cout<<" +("<<x2<<"^"<<t<<"/"<<t<<"!)";
	 t+=1;
	 if(t>100)//`.'e^[x] is infinite series
	 break;
	 cout<<" +("<<x2<<"^"<<t<<"/"<<t<<"!)";
	 t+=1;
	 if(t>100)
	 break;
	 }
	cout<<"...";
}
else if(x1<100)
{
	cout<<" e^("<<x1<<")="<<exp(x1)<<"= \n";
	cout<<"\n 1";
	t=1;
	for(i=1;i<=t;++i)
	 {
	 cout<<" +("<<x1<<"^"<<t<<"/"<<t<<"!)";
	 t+=1;
	 if(t>100)//`.'e^[x] is infinite series
	 break;
	 cout<<" +("<<x1<<"^"<<t<<"/"<<t<<"!)";
	 t+=1;
	 if(t>100)
	 break;
	 }
	cout<<"...";
}
break;//case 4 ends here

default:cout<<" Warning! u  can't enter more than that 4!\n";
goto default2;

}//end of switch case
break;
default://this is of main heading
cout<<" Warning! u can't enter more than that of 2!!";
goto defaultmain;
}
char order;
cout<<"\n\n Do u want to enter more??(y/n): ";
cin>>order;
if((order=='Y')||(order=='y'))
goto on_order;
}
void statsch(void)
{
textbackground(9);
textcolor(3);
restart:
clrscr();
int mdorsd;
cout<<"\t\t\t\t[STATISTICS]\n";
cout<<"Now,choose for:-"
<<"\n\t1>>Mean deviation"
<<"\n\t2>>Standard deviation";
d1:cout<<"\n\n\tEnter your choice:";
cin>>mdorsd;
switch(mdorsd)
{
default:cout<<"\nYou hve entered wrong number!!";goto d1;
case 1:
clrscr();
int md;
cout<<"\nMean deviation about:-"
<<"\n\t1>>Mean"
<<"\n\t2>>Median";
d2:cout<<"\n\n\tEnter your choice:";
cin>>md;
switch(md)
{
default:cout<<"\nYou hve entered wrong number!!";goto d2;
case 1:
clrscr();
cout<<"\nMean deviation about mean for:-"
<<"\n\t1>>Ungrouped data"
<<"\n\t2>>Grouped data"
<<"\n\t3>>Continuos frequency distribution data";
d3:cout<<"\n\n\tEnter your choice:";
int meandata;
cin>>meandata;
switch(meandata)
{
default:cout<<"\nYou hve entered wrong number!!";goto d3;
case 1:clrscr();md_ug();break;
case 2:clrscr();md_g();break;
case 3:clrscr();
cout<<"\nMean deviation about mean for"
<<" Continuos frequency distribution data"
<<"\ncan be calculate in:-"
<<"\n\t1>>Normal method";
d4:cout<<"\n\t2>>Shortcut method"
<<"\n\n\tEnter your choice:";
int meancfd;
cin>>meancfd;
switch(meancfd)
{
default:cout<<"\nYou hve entered wrong number!!";goto d4;
case 1:clrscr();md_cfd();break;
case 2:clrscr();md_stc_cfd();break;
}break;
}break;
case 2:clrscr();
cout<<"Mean deviation about median for:-"
<<"\n\t1>>Ungrouped data"
<<"\n\t2>>Grouped data"
<<"\n\t3>>Continuos frequency distribution data";
d5:cout<<"\n\n\tEnter your choice:";
int med;
cin>>med;
switch(med)
{
default:cout<<"\nYou hve entered wrong number!!";goto d5;
case 1:clrscr();md_med_ug();break;
case 2:clrscr();md_med_g();break;
case 3:clrscr();md_med_cfd();break;
}break;//end switch for md abt med
}break;
case 2:clrscr();
cout<<"Standard deviation for:-"
<<"\n\t1>>Ungrouped data"
<<"\n\t2>>Grouped data"
<<"\n\t3>>cContinuos frequency distribution data";
d6:cout<<"\n\n\teEnter your choice:";
int sd;
cin>>sd;
switch(sd)
{
default:cout<<"\nYou hve entered wrong number!!";goto d6;
case 1:clrscr();//for ung sd
sd_ug();break;


case 2://for g sd
//g
cout<<"Standard deviation for grouped data"
<<" can be calulated by:-"
<<"\n\t1>>With mean"
<<"\n\t2>>Without mean";
d7:cout<<"\n\n\tEnter your choice:";
int sdg;
cin>>sdg;
switch(sdg)
{
default:cout<<"\nYou hve entered wrong number!!";goto d7;
case 1:clrscr();sd_g();break;
case 2:clrscr();sd_otr_g();break;
}break;//end switch for sd of g
case 3:clrscr();
cout<<"Standard deviation for"
<<" Continuos frequency distribution data"
<<"\ncan be calculate in:-"
<<"\n\t1>>Normal method"
<<"\n\t2>>Shortcut method";
d8:cout<<"\n\n\tEnter your choice:";
int sdcfd;
cin>>sdcfd;
switch(sdcfd)
{
default:cout<<"\nYou hve entered wrong number!!";goto d8;
case 1:clrscr();sd_cfd();break;
case 2:clrscr();sd_stc_cfd();break;
}break;//end switch for sd of cfd
}break;//end switch for sd
}//end switch for md or sd
char order;
cout<<"\n\nDo u want to goto the menu again??(y/n): ";
cin>>order;
if((order=='Y')||(order=='y'))
goto restart;
getch();
}//end of main()