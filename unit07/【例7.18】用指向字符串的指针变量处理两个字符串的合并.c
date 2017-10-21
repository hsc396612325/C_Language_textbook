#include <stdio.h>
int main (void)
{
	char str1[80],str2[30],*ptr1=str1,*ptr2=str2;
	printf("请输入字符串1：\n");
	gets(str1);
	printf("请输入字符串2：\n");
	gets(str2); 
	printf("str1.....str2\n");
	printf("%s.....%s\n\n",ptr1,ptr2);
	
	while(*ptr1)//使prt1指向字符串的最后 
		ptr1++; 
	while(*ptr2)
		*ptr1++=*ptr2++;//将ptr2的指向的字符连接到ptr1后，同时移动
	*ptr1='\0'; 
	printf("str1.....str2\n");
	printf("%s.....%s\n",str1,str2); 
	return 0;
}
