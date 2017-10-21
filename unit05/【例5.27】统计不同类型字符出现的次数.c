#include <stdio.h>
#include <ctype.h>/*判断字符1函数*/ 
int main(int argc, char *argv[])
{
	int ch;
	int spaces;/*空格数*/
	int letters;/*a~z，A~Z*/
	int digite;/*0~9*/
	int puncts;/*标点*/
	int others,total;/*其他字符，和总字符*/
	spaces=letters=digite=puncts=others=total=0;
	printf("随便输入：\n");
	while((ch=getchar())!=EOF)
	{	
		total++;
		if(isspace(ch)) spaces++;
		else if(isalpha(ch))letters++;
		else if(isdigit(ch))digite++; 
		else if(ispunct(ch))puncts++;
		else others++; 
	}	
	if(total!=0)
	{
		printf("你输入的字符共有%d个空格数\n",spaces);
		printf("你输入的字符共有%d个字母\n",letters);
		printf("你输入的字符共有%d个数字\n",digite);
		printf("你输入的字符共有%d个标点\n",puncts);
		printf("你输入的字符共有%d个其他字符\n",others);
		printf("你一共输入了%d个字符\n",total);
		
	}
	return 0;
}