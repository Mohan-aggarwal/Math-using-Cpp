#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
clrscr();
on_order:
int a,b,i,T,x,y;
cout<<"Enter values of a & b to makeout a complex number:\na=";
cin>>a;
cout<<"b=";
cin>>b;
T=sqrt((a*a)+(b*b));
x=sqrt((T+a)/2);
y=sqrt((T-a)/2);

if(b>0)
{
cout<<"Ur complex number is: "<<a<<"+"<<b<<"i";
cout<<"\nThe square roots of the above complex number: \nRoot#1="
<<x<<"+"<<y<<"i \nRoot#2=-"<<x<<"-"<<y<<"i";
}
else if(b<0)
{
cout<<"Ur complex number is: "<<a<<b<<"i";
cout<<"\nThe square roots of the above complex number: \nRoot#1="
<<x<<"-"<<y<<"i \nRoot#2=-"<<x<<"+"<<y<<"i";
}
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
getch();
return 0;
}
