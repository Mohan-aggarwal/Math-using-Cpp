#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
int main()
{
clrscr();
int ch;
float a,b,alpha,mod,thita,pi=180,thita1,thita3;
on_order:
cout<<"\t\t[MODULUS, CONJUGATE & ARGUMENT OF A COMPLEX NUMBER]\n\n";
enter_ur_input:
cout<<"Enter values for a & b, for making a complex number 'a+bi':\n";
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"\nYour complex number is "<<a<<"+("<<b<<"i)\n";
cout<<"\nWhat do you wanted to with this??\n";
choice:
    cout<<"\t1.Find its modulus\n"
	<<"\t2.Find its conjugate\n"
	<<"\t3.Find its argument\n"
	<<"\n\tEnter ur choice: ";
cin>>ch;
switch(ch)
{
case 1 :cout<<"\n\t| z |=Square root of("<<a<<"^2 +"<<b<<"^2)= ";
	mod=sqrt(a*a+b*b);
	cout<<" Modulus = "<<mod<<"\n";
	break;

case 2 :if(b>0)
	cout<<"\n\tConjugate = "<<a<<"-"<<b<<"i\n";
	else if(b<0)
	cout<<"\n\tConjugate = "<<a<<"+"<<b*(-1)<<"i\n";
	break;

case 3 :cout<<"\n\tArgument of ur complex number= ";
	if(((a>0)||(a<0))&&((b<=0)||(b>=0)))
	{
	alpha=atan(b/a);
	if((a>0)||(b>0))
	thita=alpha;
	else if((a>0)||(b<0))
	thita=(-alpha);
	else if((a<0)||(b>0))
	thita=(pi-alpha);
	else if((a<0)||(b<0))
	thita=(-pi+alpha);
	cout<<thita<<"\n";
	}
	else if((a==0)&&((b>0)||(b<0)))
	{
	if(b>0)
	{
	thita1=(pi/2);
	cout<<thita1<<"\n";
	}
	else if(b<0)
	{
	thita3=((3*pi)/2);
	cout<<thita3<<"\n'";
	}
	}
	else if((a==0)&&(b==0))
	{
	cout<<"\nsince,thita= tangent inverse of (b/a),can`t calculate 0/0,"
	<<"plz re-enter the values \n";
	goto enter_ur_input;
	}
	break;
default:cout<<"\n\tWarning! You can't enter more than that of 3 !\n";
	goto choice;

	//here break doesn`t work
} //end of switch case
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
exit:
cout<<"\n\nPlese enter 'x' for exit: ";
cin>>ch1;
if(ch1=='x')
exit(0);
else
goto exit;
getch();
return 0;
}

