#include <stdio.h>
struct date
{
	int year;
	int month;
	int day;
	int we
}d;
void input()
{
	printf("请输入年份(1990年之后)：");
	scanf("%d",&d.year);
	printf("请输入月份：");
	scanf("%d",&d.month);
	printf("请输入日期：");
	scanf("%d",&d.day); 
}
void count1()
{
	int ye,da=0,we,i;
	ye=d.year-1990;
	da=ye*365+(ye+3)/4-(ye+3)/100+(ye+3)/400;//当前年份到1980的天数 	
	for(i=1;i<d.month;i++)// 当前月份到一月的天数
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) 
	 		da+=31;
 		else if(i==4||i==6||i==9||i==11)
 			da+=30;
		else if(i==2&&(d.year%4==0&&d.year%100!=0||d.year%400==0))
			da+=29;
		else
			da+=28;
	}
	da+=d.day-1;//当前日期到1号的天数	
	d.we=da%5;
}
void output()
{
	printf("这天这个人在：");
	if(d.we<3)
		printf("打鱼\n");
	else
		printf("晒网\n"); 
}
int main (void)
{
	input();
	count1();
	output();	
}
