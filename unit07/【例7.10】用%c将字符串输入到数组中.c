#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char d[20];
	int i;
	printf("输入10个字符：\n");
	for(i=0;i<10;i++)
		scanf("%c",&d[i]);//必须输入10个字符，且末尾不会自动加'\0'
	d[i]='\0'; //最后一个字符后加'\0'
	printf("利用c输入结果\n"); 
	for(i=0;i<10;i++)
		printf("%c",d[i]);//%c逐个输出 
	printf("\n");
	printf("%s\n",d);//%s整体输出
	
	printf("输入10个字符：\n"); 
	scanf("%s",d);//系统会自动加'\0' 
	printf("利用s输入结果\n"); 
	printf("%s\n",d); 
	return 0;
}