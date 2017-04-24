#include<stdio.h>
#include"include/max.h"
#include"include/min.h"
int main()
{
int a,b;
a=90;
b=15;
printf("较大的数为：%d\n",max(a,b));
printf("较小的数为：%d\n",min(a,b));
return 0;
}
