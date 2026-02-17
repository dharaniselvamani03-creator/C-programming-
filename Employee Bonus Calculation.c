#include<stdio.h>
int main()
{
int exp,salary;
scanf("%d %d",&exp,&salary);
if(exp>=10)
{
printf("%d",salary*20/100);
}
else if (exp>=5 && exp<=9)
{
printf("%d",salary*10/100);
}
else
{
printf("No bonus");
}
}
