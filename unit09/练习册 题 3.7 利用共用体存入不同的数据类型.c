#include <stdio.h>
union s
{
	int a;
	double b;
};
int main(void)
{
	union s aa[10];
	int flag,i;
	printf("输入1存入5分制，输入2存入百分制:");
	scanf("%d",&flag);
	printf("请输入数据："); 
	if(flag==1)
	{
		for(i=0;i<10;i++)
			scanf("%d",&aa[i].a);
	}
	if(flag==2)
	{
		for(i=0;i<10;i++)
			scanf("%lf",&aa[i].b);
	}
	if(flag==1)
	{
		for(i=0;i<10;i++)
			printf("%d ",aa[i].a);
	}
	if(flag==2)
	{
		for(i=0;i<10;i++)
			printf("%lf ",aa[i].b);
	}		
	
}