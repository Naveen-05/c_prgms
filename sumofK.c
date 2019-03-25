#include<stdio.h>
#include<conio.h>
int main()
{
int arr[20],i,m,sum=0;
clrscr();
printf("how many elements you want to enter:");
scanf("%d",&m);
printf("enter any %d elements in array:",m);
for(i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
printf("sum of array elements:");
for(i=0;i<m;i++)
{
sum=sum+arr[i];
}
for(i=0;i<m;i++)
{
}
printf("%d",sum);
getch();
}
