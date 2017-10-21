/*求三个整数中最大值*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int a,b,c;
  printf("请输入三个整数啊a,b,c:");
  scanf("%d,%d,%d",&a,&b,&c);
  if(a>b)
    a=a;
  else
    a=c;
  if(a>c)
    printf("%d",a);
  else
    printf("%d",c);
  getch();
}
