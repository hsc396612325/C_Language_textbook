#include <stdio.h>
#include <ctype.h> //tolower函数的头文件。 
int main(void)
{
	int a;
	char b;
	int *aint;
	char *ch;
	printf("请输入一个整数和一个字符类型：");
	scanf("%d %c",&a,&b);
	aint=&a;
	ch=&b;
	*aint=*aint+24;
	*ch=tolower(*ch);	//tolower函数把字母类型数据化为小写字母，其他字符不变。 
	printf("改变后的整数值：%d\n",*aint);
	printf("改变后的字符类型：%c\n",*ch); 
	return 0;
}