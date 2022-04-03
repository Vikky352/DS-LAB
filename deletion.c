#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,n,p,v;
    printf("Enter element to array:- ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter position to delete:- ");
    scanf("%d",&n);
    for(i=0;i<5-1;i++)  
    {
        if(i>=n-1)
        {
            a[i]=a[i+1];
        }
    }  
    printf("after deletion array is :- ");
   for(i=0;i<5-1;i++)
    {
        printf("%d ",a[i]);
    } 
    
}
