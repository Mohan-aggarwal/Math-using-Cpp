#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<math.h>

struct complex
{
float real,imag;
};
complex num1,num2;

float find_thita(float a,float b);
void total(complex num1,complex num2);
void difference(complex num1,complex num2);
void multiply(complex num1,complex num2);
void division(complex num1,complex num2);
void main()
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
{goto user_order;}
else if((order=='N')||(order=='n'))
{
cout<<"\n\tThank you for executing this program! Have a grate day!!";
char ch1;
cout<<"\n\nPlese enter 'x' for exit: ";
cin>>ch1;
if(ch1=='x')
exit(0);
}
getch();
}
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