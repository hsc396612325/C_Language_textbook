#include <stdio.h>
enum weekday {Sunday=6,Monday=0,Tuesday,Wednesday,Thursday,Friday,Saturday};
struct date
{
	int year;
	int month;
	int day;
	enum weekday we;
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
void count1()
{
	int da=0,we,i;
	da=(d.year-1)*365+(d.year-1)/4-(d.year-1)/100+(d.year-1)/400;//当前年份到1980的天数 	
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
	d.we=(enum weekday)(da%7);
}
void output()
{
	printf("%d %02d %02d\n",d.year,d.month,d.day);
	switch (d.we)
	{
		case Monday:printf("1Monday\n");break;
		case Tuesday:printf("2Tuesday\n");break;
		case Wednesday:printf("3Wednesday\n");break;
		case Thursday:printf("4Thursday\n");break;
		case Friday:printf("5Friday\n");break;
		case Saturday:printf("6Saturday\n");break;
		case Sunday:printf("7Sunday\n");break;
	} 	
}
int main(void)
{
	input();
	count1();
	output();
}