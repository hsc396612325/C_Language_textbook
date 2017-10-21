#include <stdio.h>
int main(int argc, char *argv[])
{
	char a,b;
	int c;
	printf("请输入一个大写字母:\n");
	scanf("%c",&a);
	a+=32;/*大转小加32*/ /*小转大减32*/ /*字符数字转数字-'0' */
	printf("其小写为：%c\n",a);
}