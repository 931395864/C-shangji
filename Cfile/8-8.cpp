#include <stdio.h>
int main()
{
int dx=0,xx=0,sz=0,kg=0,qt=0,i=0;
char *p,s[20];
printf("input string:  ");
while ((s[i]=getchar())!='\n') i++;
p=&s[0];
while (*p!='\n')
  {if (('A'<=*p) && (*p<='Z'))
     ++dx;
   else if (('a'<=*p) && (*p<='z'))
     ++xx;
   else if (*p==' ')
     ++kg;
   else if ((*p<='9') && (*p>='0'))
     ++sz;
   else
     ++qt;
   p++;
  }
printf(" daxie:%d    xiaoxie:%d\n",dx,xx);
printf("kongge:%d      shuzi:%d    qita:%d\n",kg,sz,qt);
return 0;
}
