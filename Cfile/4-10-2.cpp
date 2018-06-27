#include <stdio.h>
int main()
{
  int i;
  double  jiangjin,m1,m2,m3,m4,m5;
  int  n;
  m1=100000*0.1;
  m2=m1+100000*0.075;
  m3=m2+200000*0.05;
  m4=m3+200000*0.03;
  m5=m4+400000*0.015;
  printf("lirun i:");
  scanf("%d",&i);
  jiangjin=i/100000;
  if (n>10)  n=10;
  switch(n)
  {  case 0:jiangjin=i*0.1;break;
     case 1:jiangjin=m1+(i-100000)*0.075;break;
     case 2:
     case 3:jiangjin=m2+(i-200000)*0.05;break;
     case 4:
     case 5:jiangjin=m3+(i-400000)*0.03;break;
     case 6:
     case 7:
     case 8:
     case 9:jiangjin=m4+(i-600000)*0.015;break;
     case 10:jiangjin=m5+(i-1000000)*0.01;
  }
   printf("jiangjin %5.2f\n",jiangjin);
   return 0;
 }
