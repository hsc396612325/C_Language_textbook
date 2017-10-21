#include <stdio.h>
enum weekday {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
struct date
{
	int year;
	int month;
	int day;
};

struct date d;
void input()
{
	printf("请输入年份(1980年之后)：");
	scanf("%d",&d.year);
	printf("请输入月份：");
	scanf("%d",&d.month);
	printf("请输入日期：");
	scanf("%d",&d.day); 
}
void count()
{
	int da=0,i;	
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
	da+=d.day;//当前日期到1号的天数
	printf("%d %02d %02d是%d年的%d天\n",d.year,d.month,d.day,d.year,da);	
}

int main(void)
{
	input();
	count();
}