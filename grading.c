#include <stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the scores in the 5 subjects");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
f=(a+b+c+d+e)/5;
if (f<=100 && f>=90)
printf("student has secured grade A");

else if(f>=80 && f<90)
printf("student has secured grade B");

else if(f>=70 && f<80)
printf("student has secured grade C");

else if(f>=60 && f<70)
printf("student has secured grade D");

else if(f>=40 && f<60)
printf("student has secured grade E");

else
printf("student has secured grade F");
return 0;
}
