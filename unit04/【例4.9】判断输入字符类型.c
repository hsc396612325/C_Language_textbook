#include <stdio.h>
int main(int argc, char *argv[])
{
	char c;
	printf("请输入一个字符\n");
	c=getchar();
	if(c<32)
		printf("这是一个控制字符\n");
	else if(c>='0'&&c<='9')
		printf("这是一个数字\n");
	else if(c>='A'&&c<='Z')
		printf("这是一个大写字母\n");
	else if(c>='a'&&c<='z')
		printf("这是一个小写字母\n");
	else
		printf("这是一个其他字符\n"); 
	return 0;
}