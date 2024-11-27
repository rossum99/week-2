#include <stdio.h>
int main()
{
int d,m,y;
printf("enter the date, month and year");
scanf("%d %d %d",&d,&m,&y);
if(m==2)
{if (y%4==0 && y%100!=0 || y%400==0)
if(d==29)
printf("1 3 %d",y);
else
printf("%d %d %d",++d,m,y);
else
{if(d==28)
printf("1 3 %d",y);
else
printf("%d %d %d",++d,m,y);
}
}
else if(m==12)
{if(d==31)
printf("1 1 %d",++y);
else
printf("%d 12 %d",++d,y);
}
else if(m==1||m==3||m==5||m==7||m==8||m==10)
{if(d==31)
printf("1 %d %d",++m,y);
else
printf("%d %d %d",++d,m,y);
}
else
{if(d>30)
printf("invalid input");
else if(d==30)
printf("1 %d %d",++m,y);
else
printf("%d %d %d",++d,m,y);
}

return 0;
}
