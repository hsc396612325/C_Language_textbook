/*利用条件语句求最大值*/
#include <stdio.h>
#include <conio.h> 
int main(int argc, char *argv[])
{
	int a,b,max;
	printf("请输入两个整数");
	scanf("%d,%d",&a,&b);
    max=(a>b)?a:b;
    printf("最大值为：%d\n",max);
 	return 0;
}