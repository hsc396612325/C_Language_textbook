#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[30]="Happy birthday",str2[30]="2014";
	puts(strcat(str1,str2));//strcat:将字符串连接到数组的串后面，返回数组首地址
							//putS:输出字符串
	printf("%d %d\n",strlen(str1),strcmp(str1,str2));//strlen计算字符串长度，并返回其长度
													//strcmp比较两个字串
	gets(str1);//gets：整体输入字符串
	printf("%d %d\n",strlen(str1),strcmp(str1,str2));
	puts(strcpy(str1,str2));//复制字符串到数组中 
	printf("%d %d\n",strlen(str1),strcmp(str1,str2));
	
	gets(str1);
	puts(strcat(str1,str2));
	 
}