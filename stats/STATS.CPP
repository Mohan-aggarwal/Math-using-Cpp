	/* ==============  Program Description  ============= */
	/*   program name : stats.cpp                         */
	/*   author : Mr. Mohan Aggarwal                      */
	/*   Program on statistics                            */
	/*   ->mean deviation & std deviation of any data     */
	/*   ->using & implementing 2d array                  */
	/* ================================================== */


#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
#include<process.h>

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

/*
		-> ABBREVIATIONS USED IN FUNTIONS <-

md-mean deviation
sd-std deviation
med-median
ug-ungrouped data
g-grouped data
cfd-continuous freqency distribution data
stc-shortcut method formula
otr-other formula
*/

void main()
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
else if((order=='N')||(order=='n'))
{
char ch1;
cout<<"\nPlese enter 'x' for exit: ";
exit:cin>>ch1;
if(ch1=='x')exit(0);
else goto   exit;
}
getch();
}//end of main()




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

for(int I=0;I<N;++I)//for list[I]
{
for(i=0;i<n;++i)//for x[i]
{
for(i=0;i<n;++i)//for f[i]
{
if(i>f[i])
continue;//go for next
}
list[I]=x[i];
}
}
double M=showMedian(list,N);

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






























