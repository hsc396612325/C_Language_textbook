#include <stdio.h>
#include <windows.h>
#define N 100 
int score[N],flag_1,n; 
void show()//打印画面
{
	printf("*******************************************\n");
	printf("        1.输入成绩（必须先输入）\n");
	printf("        2.求平均数，最高分，最低分\n");
	printf("        3.统计及格率和各分数段人数\n");
	printf("        4.排序\n");
	printf("        5.输出之前输入学生分数\n");
	printf("        0.退出\n");
	printf("*******************************************\n");
	scanf("%d",&flag_1);
} 
void input()//输入数据
{
	int i;
	printf("需要输入多少个学生成绩：\n");
	scanf("%d",&n);
	printf("请输入学生的成绩：\n");
	for(i=0;i<n;i++)
		scanf("%d",&score[i]); 
	printf("输入完毕\n");
}	
	
void avemaxmin()//最值平均数
{
	int max,min,sum=0,i;
	for(i=1,max=min=score[0];i<n;i++)
	{
		if(max<score[i])
			max=score[i];
		if(min>score[i])
			min=score[i];
		sum+=score[i];
	}
	printf("最高分:%d,最小值:%d,平均分:%g\n",max,min,sum/(double)n);
}
void count()//统计分数段
{
	int cn[11]={0},i,sum;
	for(i=0;i<n;i++)
	{	if(score[i]==100)
			score[i]--;
		cn[score[i]/10]++;
	}
	printf("各分数段成绩如下：\n");
	printf(" 0-9 10-19 20-29 30-39 40-49 50-59 60-69 70-79 80-89 90-100\n");
	for(i=0;i<10;i++)
		printf("  %d   ",cn[i]);
	for(i=0;i<6;i++)
		sum+=cn[i];
	printf("\n及格率为：%g\n",sum/(double)n);
	printf("\n");
}	
void sort()//排序 
{
	int i,j,t,a[40];
	for(i=0;i<n;i++)
		a[i]=score[i];
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	printf("排序后结果为：\n");
	for(i=0;i<n;i++)
		printf("%d  ",score[i]);
} 

void output()
{
	for(i=0;i<n;i++)
		printf("%d  ",score[i]);	
}
int main(void)
{
	while(1)
	{
		show();
		switch(flag_1)
		{
			case 1:input();break;
			case 2:avemaxmin();break;
			case 3:count();break;
			case 4:sort();break;
			case 5:output();break;
			case 0:exit(1);break;
		}
		printf("按任意键后可进行其他操作\n");
		getch();
		system("cls");
	}	
}