#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
#include<process.h>
int main()
{
clrscr();
float a,b,mod,alpha,thita,pi=180,thita1,thita3;
on_order:
enter_ur_input:
cout<<"\t\t\t[POLAR & EULER FORM]\n"
<<"Enter values for a & b, for making a complex number 'a+bi': "<<endl;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"Your complex number is "<<a<<"+("<<b<<"i)"<<endl;

mod=sqrt(a*a+b*b);
if(((a>0)||(a<0))&&((b<=0)||(b>=0)))
{
alpha=(atan(b/a));

if((a>0)||(b>=0))
thita=alpha;
else if((a>0)||(b<=0))
thita=(-alpha);
else if((a<0)||(b>=0))
{
thita=pi-alpha;
}
else if((a<0)||(b<=0))
{
thita=(-pi+alpha);
}
cout<<"\nThe required `polar form' of your complex number "<<a<<"+("<<b<<"i)"
<<" is "<<"\n"<<mod<<"[cos("<<thita<<")+isin("<<thita<<")]"<<endl;
cout<<"\nThe required `euler form' of your complex number "<<a<<"+("<<b<<"i)"
<<" is "<<"\n"<<mod<<".e^("<<thita<<" i)"<<"\t\t(where, e=2.71828......)";
	}
else if((a==0)&&((b>0)||(b<0)))
{
	if(b>0)
	{
	thita1=(pi/2);
	cout<<thita1<<"\n";
cout<<"\nThe required `polar form' of your complex number "<<a<<"+("<<b<<"i)"
<<" is "<<"\n"<<mod<<"[cos("<<thita1<<")+isin("<<thita1<<")]"<<endl;
cout<<"\nThe required `euler form' of your complex number "<<a<<"+("<<b<<"i)"
<<" is "<<"\n"<<mod<<".e^("<<thita1<<" i)"<<"\t\t(where, e=2.71828......)";
	}

	else if(b<0)
	{
	thita3=((3*pi)/2);
	cout<<thita3<<"\n'";
cout<<"\nThe required `polar form' of your complex number "<<a<<"+("<<b<<"i)"
<<" is "<<"\n"<<mod<<"[cos("<<thita3<<")+isin("<<thita3<<")]"<<endl;
cout<<"\nThe required `euler form' of your complex number "<<a<<"+("<<b<<"i)"
<<" is "<<"\n"<<mod<<".e^("<<thita3<<" i)"<<"\t\t(where, e=2.71828......)";
	}

	}
	else if((a==0)&&(b==0))
	{
cout<<"\nsince,thita= tangent inverse of (b/a),can`t calculate 0/0,"
<<"plz re-enter the values \n";
	goto enter_ur_input;
	}
char order;
cout<<"\nDo u want to enter more??(y/n): ";
cin>>order;
if((order=='Y')||(order=='y'))
{
for(int i=0;i<=79;i++)
{
cout<<"_";//making a hori. line fit to screen
}
goto on_order;
}
else if((order=='N')||(order=='n'))
{
}
cout<<"\n\tThank you for executing this program! Have a grate day!!";
char ch1;
cout<<"\nPlese enter 'x' for exit: ";
cin>>ch1;
if(ch1=='x')
exit(0);
getch();
return 0;
}