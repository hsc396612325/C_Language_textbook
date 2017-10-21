/*输入一个字符，不论其是否为大写都将其转换为大写*/
#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
	char ch;
	ch=getchar();  /*getchar输入一个字符*/ 
	ch=ch>='a'&&ch<='z'?ch-32:ch;
	putchar(ch);   /*putchar输出一个字符*/ 
	return 0;
}