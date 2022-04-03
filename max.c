#include<stdio.h>
void main()
{ int a[5],i,m=0;
printf("enter element of array:- ");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    if(m<a[i])
    {
        m=a[i];
    }
}
printf("largest ellement is :- %d",m);

}