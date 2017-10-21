#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (void)
{
	int weishu,num,n=9;
	char ch; 
	int linenume1,linenume2,i;
	int  a[100]={0},b[100]={0};
	printf("请输入难度（+、-、x、/）；");
	scanf("%c",&ch);
	printf("请选择位数：");
	scanf("%d",&weishu);
	printf("请选择题数：");
	scanf("%d",&num);
	srand((unsigned)time(NULL));
	for(i=1;i<weishu;i++)
		n=n*10+9;
	for(i=0;i<num;i++)
	{
		linenume1=rand()%n+1;
		linenume2=rand()%n+1;		//1.随机抽两个数；
		if(ch=='+')
		{
			printf("%d+%d=\n",linenume1,linenume2);
			a[i]=linenume1+linenume2;	
		}	
		else if(ch=='-')
		{
			printf("%d-%d=\n",linenume1,linenume2);//2.根据输入难度输出不同输出算数
			a[i]=linenume1-linenume2;				//3.保存答案；
		}
		else if(ch=='x')
		{
			printf("%dx%d=\n",linenume1,linenume2);
			a[i]=linenume1*linenume2;
		}					
		else if(ch=='/')	
		{
			printf("%d/%d=\n",linenume1,linenume2);
			a[i]=linenume1/linenume2;
		}								 
	} 
	printf("请输入你的答案：\n"); 
	for(i=0;i<num;i++)
		scanf("%d",&b[i]);
	for(i=0;i<num;i++)  //4.保存计算者的答案
	{					//5，对比正确答案，并输出对错
		if(b[i]==a[i])
			printf("第%d题正确，你的答案为%d，正确答案为%d\n",i+1,b[i],a[i]);
		else
			printf("第%d题错误，你的答案为%d，正确答案为%d\n",i+1,b[i],a[i]);	
	}									
										 
	return 0;
}
 
