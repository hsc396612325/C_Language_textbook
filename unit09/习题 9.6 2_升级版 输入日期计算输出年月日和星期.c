#include <stdio.h>
enum weekday {Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday=0};
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
	int j,k;
	j=d.year/100;
	k=d.year%100;
	d.we=(enum weekday)((d.day+(26*d.month+26)/10+k+k/4+j/4+5*j)%7);
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