#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
clrscr();
on_order:
float a,b,c,root1,root1i,root2,root2i,D1,D2,i;
cout<<"enter three numbers a,b & c for "
    <<"ax^2 + bx + c :\na=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
if(!a)
{
	cout<<"Value of \'a\'should not be zero(0)"
	    <<"\n RE_ENTER the value of a:"<<"\na=";
	cin>>a;
}
else
 {
	D1=(b*b-4*a*c);
	D2=(4*a*c-b*b);
	if((D1>0)&&(D2<0))
	{
		root1=(-b + sqrt(D1))/(2*a);
		root2=(-b - sqrt(D1))/(2*a);
		cout<<"\n.'.Roots are REAL & UNEQUAL"<<"\n\n";
		cout<<"Root1= "<<root1<<"\n"
		    <<"Root2= "<<root2;
	}
	else if((D1==0)&&(D2==0))
	{
		root1=-b/(2*a);
		cout<<"\n.'.Roots are REAL & EQUAL"<<"\n\n";
		cout<<"Root1= "<<root1<<"\n"
		    <<"Root2= "<<root1;
	}
	else if((D1<0)&&(D2>0))
	{
		root1i=((-b + sqrt(D2))/(2*a));
		root2i=((-b - sqrt(D2))/(2*a));
		cout<<"\n\t.'.Roots are COMPLEX & IMAGINARY"<<"\n\n";
		cout<<"Root1= "<<root1i<<"i\n"
		    <<"Root2= "<<root2i<<"i";
	}
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
