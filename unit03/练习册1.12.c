#include <stdio.h>
int main(int argc, char *argv[])
{
	unsigned int x=4294967295;
	printf("无符号整数=%u\n八进制=%o\n十六进制=%x\n十进制整数%d\n",x,x,x,x);
	printf("%x/n",-1);
	return 0;
}
/*不知为何跟书上答案不同，猜测跟不同编译器unsigned表示范围不同有关*/
/*果然，我猜对了*/ 
/*unsigned int 65535!=int -1;而unsigned int 4294967295==int -1*/ 