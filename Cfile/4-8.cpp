#include <stdio.h>
int main()
  { 
  float s;
  char g;
  printf("������ѧ���ɼ�:");
  scanf("%f",&s);
  while (s>100||s<0)
  {
  printf("\n ��������,������");
  scanf("%f",&s);
  }
  switch((int)(s/10))
    {
	case 10:
	case 9: g='A';break;
	case 8: g='B';break;
	case 7: g='C';break;
	case 6: g='D';break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0: g='E';
	}
    printf("�ɼ��� %5.1f,��Ӧ�ĵȼ���%c\n ",s,g);
	return 0;
  }
