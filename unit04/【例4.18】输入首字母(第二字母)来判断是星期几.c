#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	char a;
	printf("请输入星期首字母\n");
	scanf("%c",&a);
	a=toupper(a);   /*小写转化为大写，头文件为（ctype）*/
	switch(a)
	{
		case 'M':printf("星期一Monday\n");break;
		case 'W':printf("星期三Wednesday\n");break;
		case 'F':printf("星期五Friday\n");break; 
		case 'T':printf("无法判断请继续输入u/h\n");
				 if((a=getch())=='u') printf("星期二Tuesday\n");
				 else if((a=getch())=='h') printf("星期四Thursday\n");
				 else printf("输入有误\n");break; 
	    case 'S':printf("无法判断请继续输入a/u\n");
				 if((a=getch())=='a') printf("星期六Saturday\n");
				 else if((a=getch())=='u') printf("星期日Sunturday\n");
				 else printf("输入有误\n");break; 
        default:printf("输入有误!\n");break;
	} 
	return 0;
}