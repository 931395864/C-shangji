#include <stdio.h>
int main()
 {
  char c;
  int zimu=0,kongge=0,shuzi=0,qita=0;
  printf("������һ���ַ�:\n");
  while((c=getchar())!='\n')
   {
     if (c>='a' && c<='z' || c>='A' && c<='Z')
    	zimu++;
     else if (c==' ')
	    kongge++;
     else if (c>='0' && c<='9')
	    shuzi++;
     else
	    qita++;
    }
   printf("��ĸ��:%d\n�ո���:%d\n������:%d\n�����ַ���:%d\n",zimu,kongge,shuzi,qita);
   return 0;
  }
