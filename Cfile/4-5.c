#include <stdio.h>
#include <math.h>
#define M 1000
int main()
{
  int m,n;                                      
  printf("������һ��С��%d������:",M);
  scanf("%d",&m);
  if (m>M) 
  {printf("�������������Ҫ������������һ��С��%d������:",M);
   scanf("%d",&m);
  }
  n=sqrt(m);
  printf("%d��ƽ���������������ǣ�%d\n",m,n);
  return 0;
}
   
  
