#include <stdio.h>
main(void)
{
    int a,k=1;
    char ch;
  	while (k)
  	{
	    printf("请输入学生分数：\n");
  		scanf("%d",&a);
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
		printf("如果打算继续输入成绩请输入Y，否则输其他字符：\n");
		/*ch=getchar();
		if(ch=='Y')
			k=1;
		else
			k=0;*/
		 
  	}
	return 0;
}