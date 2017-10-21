#include <stdio.h>
int main(int argc, char *argv[])
{
	int x;
	char y;
	printf("请输入成绩:"); 
	scanf("%d",&x);
	switch(x/10)
	{
		case 10:switch(x%100)
				{
					case   0:  printf("等级为A\n");break;
					default :printf("请输入0~100间的数字！\n");
				}
				break;	 
		case  9:printf("等级为A\n");break;
		case  8:printf("等级为B\n");break;
		case  7:
		case  6:printf("等级为C\n");break;
		case  5:
		case  4:
		case  3:
		case  2:
		case  1:
		case  0:printf("等级为D\n");break;
		default:printf("请输入0~100间的数字！\n"); 
	}
	return 0;
}