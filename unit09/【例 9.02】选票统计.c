#include<stdio.h>
#include<string.h>

struct person
{
	char name[20];
	int count;	
};

int main(void)
{
	struct person leader[3]={"fu",0,"lu",0,"shou",0},t;
	int i,j,k;
	int n=3,m;
	char name[20];
	printf("请输入选票的个数：\n");
	scanf("%d",&m);
	fflush(stdin);
	printf("请依次输入投票情况：\n");
	for(i=1;i<=m;i++)//根据选票，统计候选人的票数 
	{
		printf("第%d张：",i);
		gets(name);
		for(j=0;j<3;j++)
			if(strcmp(name,leader[j].name)==0)
				leader[j].count++;
	}
	for(i=0;i<n-1;i++)//选择排序 
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(leader[k].count<leader[j].count)
				k=j;
		if(k!=i);
		{
			t=leader[k];
			leader[k]=leader[i];
			leader[i]=t;
		}
	} 
	printf("得票情况下：\n");//输出 
	for(i=0;i<n;i++)
		printf("%s\t%d\n",leader[i].name,leader[i].count);
		
}