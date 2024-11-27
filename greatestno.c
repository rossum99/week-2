#include <stdio.h>
int main()
{
int a=5,b=15,c=4;
if (a>b && a>c)
printf("%d is the largest no.",a);
else if(b>a && b>c)
printf("%d is the largest no.",b);
else
printf("%d is the largest no.",c);
return 0;
}
