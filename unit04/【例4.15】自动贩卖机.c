#include <stdio.h>
int main(int argc, char *argv[])
{
	int a;
	printf("  ********自动贩卖机查询系统********   \n");
	printf(" 查询价格请输入商品前面编号，退出请按0 \n");
	printf("                1.绿茶\n");
	printf("                2.可乐\n");
	printf("                3.芬达\n");
	printf("                4.矿泉水\n");
	printf("                5.爆米花\n");
	printf("                6.瓜子\n");
	printf("                0.退出\n");
	printf("你要查询：\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("绿茶3.5元/瓶");break;
		case 2:printf("可乐3.5元/瓶");break;
		case 3:printf("芬达3.5元/瓶");break;
		case 4:printf("矿泉水1/瓶");break;
		case 5:printf("爆米花5元/桶");break;
		case 6:printf("瓜子2元/袋");break;
		case 0:printf("谢谢使用");return 0;
		default:printf("输入错误"); 
	} 
	printf("\n");
	return 0;
}