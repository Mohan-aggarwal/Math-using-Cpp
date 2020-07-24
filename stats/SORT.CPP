#include<iostream.h>
#include<conio.h>
int sort(int a[15],int);
int sort(int a[15],int n)
{
int i=0,j,temp;
while(i<n-1)
{
j=i+1;
while(j<n)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
j++;
}
i++;
}
return a[15];
}
