#include<stdio.h>
int year;
int count(int year)//计算当前年份1.1为星期几 
{
	int ye,day,enter;
	ye=(year-1980);
	day=ye*365+(ye+3)/4-(ye+3)/100+(ye+3)/400;
	enter=(day+2)%7;
	return enter;	
}
void input()
{
	printf("请输入年份(1980年之前)："); 
	scanf("%d",&year);
}
void output()
{
	int month,day,loop,blank,enter;    //blank控制每个月前的空格，enter控制每周的回车 
	enter=count(year); 
	printf("%d年日历如下：\n",year);
 	for(month=1;month<13;month++)  //2.控制月份的递加 
	 {
	 	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) 
	 		day=31;
 		else if(month==4||month==6||month==9||month==11)
 			day=30;
		else if(month==2&&(year==2004||year==2008))//3.根据月份选择天数 
			day=29;
		else
			day=28;
		enter=enter%7;            //5.每月bleak输出个数的确定 
		printf("        %2d月\n",month);	//4打印表头 
		printf("日 一 二 三 四 五 六\n");							
		for(blank=0;blank<enter;blank++) //6.输出空格 
			printf("   "); 
		for(loop=1;loop<=day;loop++)//7.输出天数 
		{	enter++;
			printf("%-3d",loop);
			if(enter%7==0)			//8.控制回车 
				printf("\n");
		} 
		printf("\n\n\n");
	 } 
}
 
int main (void)
{
	input();
	output();
}