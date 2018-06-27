#include <stdio.h>
int main()
{
  int i;
  double jiangjin,m1,m2,m3,m4,m5;
  m1=100000*0.1;
  m2=m1+100000*0.075;
  m3=m2+100000*0.05;
  m4=m3+100000*0.03;
  m5=m4+400000*0.015;
  printf("lirun i:");
  scanf("%d",&i);
  if (i<=100000)
     jiangjin=i*0.1;
  else if (i<=200000)
     jiangjin=m1+(i-100000)*0.075;
  else if (i<=400000)
     jiangjin=m2+(i-200000)*0.05;
  else if (i<=600000)
     jiangjin=m3+(i-400000)*0.03;
  else if (i<=1000000)
     jiangjin=m4+(i-600000)*0.015;
  else
     jiangjin=m5+(i-1000000)*0.01;
  printf("jiangjin: %5.2f\n",jiangjin);
  return 0;
 }
 
