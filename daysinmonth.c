#include <stdio.h>
int main()
{
int b,a;
printf("enter the month and year");
scanf("%d %d",&b,&a);
if(b==2)
{if (a%4==0 && a%100!=0 || a%400==0)
printf("29");
else
if(b==2)
printf("28");
}
else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
printf("31");
else
printf("30");

return 0;
}

