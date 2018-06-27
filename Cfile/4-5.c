#include <stdio.h>
#include <math.h>
#define M 1000
int main()
{
  int m,n;                                      
  printf("请输入一个小于%d的正数:",M);
  scanf("%d",&m);
  if (m>M) 
  {printf("输入的数不符合要求，请重新输入一个小于%d的整数:",M);
   scanf("%d",&m);
  }
  n=sqrt(m);
  printf("%d的平方根的整数部分是：%d\n",m,n);
  return 0;
}
   
  
