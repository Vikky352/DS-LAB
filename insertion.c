#include<conio.h>
#include<stdio.h>
void main()
{
     
    int a[10],i,n,p,v;
    printf("Enter element to array:- ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\n enter position:-  ");
    scanf("%d",&p);
    printf("enter value :- ");
    scanf("%d",&v);
    for(i=p-1;i<6;i++)
    {
        int t=v;
          v=a[i];
          a[i]=t;
       
    }
     printf("after insertion array is :- ");
    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }  
}
