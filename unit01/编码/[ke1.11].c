/*由年龄和是否为学生确定价格*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int age,b;
  printf("请输年龄:\n");
  scanf("%d",&age);
  if(age<=12)
    printf("10元");
  else
    if(age>=60)
     printf("三折");
     else
       printf("是学生输1，不是输2:\n");
       scanf("%d",&b);
      if(b>1)
       printf("原价");
      else
       printf("五折");
  getch();
}
