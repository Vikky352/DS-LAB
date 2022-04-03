#include<conio.h>
#include<stdio.h>
void main()
{ int a[5],i,n=0,m=0;
    printf("enter element of array:- ");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    if(m<a[i])
    {n=m;
    m=a[i];}
    else if(n<a[i])
    n=a[i];

}
printf("second largest element :- %d\n",n);
}
