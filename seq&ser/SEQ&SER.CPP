#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<process.h>
void main()
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
else if((order=='N')||(order=='n'))
{
char ch1='x';
cout<<"\n\n Plese enter \"x\" for exit: ";
exit:cin>>ch1;
if(ch1=='x')
exit(0);
else goto exit;
}
getch();
}