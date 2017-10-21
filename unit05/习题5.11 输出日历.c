#include<stdio.h>
int main (void)
{
	int year,month,day,loop,blank,enter;    //blank控制每个月前的空格，enter控制每周的回车 
	printf("请输入年份(2001年到2010年)：");
	scanf("%d",&year);
	switch(year)
	{
		case 2001: enter=1;break;
		case 2002: enter=2;break;
		case 2003: enter=3;break;
		case 2004: enter=4;break;
		case 2005: enter=6;break;		//1.根据年份选择一月前的空格数 
		case 2006: enter=0;break;
		case 2007: enter=1;break;
		case 2008: enter=2;break;
		case 2009: enter=4;break;
		case 2010: enter=5;break;
		default:printf("输入错误！");exit(1);	
	} 
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
		printf("        %2d月\n",month);	//4打印表头 
		printf("日 一 二 三 四 五 六\n");
		enter%=7;					//5.每月bleak输出个数的确定 
		for(blank=0;blank<enter;blank++) //6.输出空格 
			printf("   "); 
		for(loop=1;loop<=day;loop++)//7.输出天数 
		{
			printf("%-3d",loop);
			enter++;
			if(enter%7==0)			//8.控制回车 
				printf("\n");
		} 
		printf("\n\n\n");
	 } 
}