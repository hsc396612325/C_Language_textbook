#include <stdio.h>
int main(int argc, char *argv[])
{
	int age;
	printf("请输入年龄：\n");
	scanf("%d",&age);
	if(age<22)
		printf("不雇佣\n");
	else if(age>=22&&age<=30)
		printf("外勤业务员\n");
	else if(age>=31&&age<=45)
		printf("内勤文员\n");
	else if(age>=46&&age<=55)
		printf("仓库管理员\n");
	else
		printf("退休\n"); 
	return 0;
}