#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<process.h>
long factorial(int);
long find_ncr(int, int);
void main()
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
else if((order=='N')||(order=='n'))
{
char ch1;
cout<<"\nPlese enter 'x' for exit: ";
exit:cin>>ch1;
if(ch1=='x')exit(0);
else goto   exit;
}
getch();
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
