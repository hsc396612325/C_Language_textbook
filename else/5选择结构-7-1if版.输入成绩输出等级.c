#include <stdio.h>
main(void)
{
    int a,k;
  	printf("请输入学生分数：\n");
  	k=scanf("%d",&a);
  	if(k==0)
    {printf("你输入的不为数字\n");exit(1);}
	if(a>100)
		printf("你输入分数错误\n");
	else if(a>=90) 
        printf("该同学分数等级为A\n");
	else if(a>=79)
        printf("该同学分数等级为B\n");
	else if(a>=59)
 		printf("该同学分数等级为C\n");
 	else if(a>=0)
  		printf("该同学分数等级为D\n");
	else
		printf("你输入分数错误\n");	
	return 0;
}