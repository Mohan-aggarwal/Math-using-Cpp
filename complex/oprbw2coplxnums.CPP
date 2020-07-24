#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<PROCESS.h>
struct complex
{
	float real,imag;
};
complex num1,num2;

void total(complex num1,complex num2);
void difference(complex num1,complex num2);
void multiply(complex num1,complex num2);
void division(complex num1,complex num2);
void main()
{
clrscr();
on_order:
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
cout<<"\n\nDo u want to enter more??(y/n): ";
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