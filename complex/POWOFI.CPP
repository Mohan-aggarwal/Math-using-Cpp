#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
int main()
{
clrscr();
int p,i,n;
on_order:
cout<<"\t\t\t\t[POWER OF IOTA(i)]\n"
<<"Enter any integer exponential value for i(iota) that is, i^n:\nn=";
cin>>n;

n%=4;
	if(n>=0)
	{
		if(n==0)
		cout<<"\nAnswer is 1";
		else if(n==1)
		cout<<"\nAnswer is i";
		else if(n==2)
		cout<<"\nAnswer is -1";
		else if(n==3)
		cout<<"\nAnswer is -i";
	}
	else if(n<=0)
	{
		if(n==-1)
		cout<<"\nAnswer is -i";
		else if(n==-2)
		cout<<"\nAnswer is -1";
		else if(n==-3)
		cout<<"\nAnswer is i";
		else if(n==0)
		cout<<"\nAnswer is 1";
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