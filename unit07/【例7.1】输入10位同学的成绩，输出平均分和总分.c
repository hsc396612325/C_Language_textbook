#include <stdio.h>
int main(void)
{
	int t[10];
	int sum=0,i;
	printf("请输入10位同学的成绩：");
	for(i=0;i<10;i++)
		scanf("%d",&t[i]);
	for(i=0;i<10;i++) 
		sum+=t[i];
	printf("总分为：%d，平均分为：%g\n",sum,sum/10.0);
	return 0;
}