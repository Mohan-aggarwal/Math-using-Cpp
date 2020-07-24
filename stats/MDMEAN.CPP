//finding mean deviation abt mean for an ungrouped data
#include<iostream.h>
#include<conio.h>
void md_ug(void);
void md_ug(void)
{
clrscr();
int n,s=0,i,x[20];
cout<<"n= ";
cin>>n;
cout<<"enter data:\n";
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

