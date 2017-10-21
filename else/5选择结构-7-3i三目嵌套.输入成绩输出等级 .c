#include <stdio.h>
int main(int argc, char *argv[])
{
	int chengji,k;
	char dengji;
	printf("请输入成绩");
	k=scanf("%d",&chengji);
	if(k==0||dengji<0||chengji>100)
		{printf("输入有误\n");exit(1);}
	dengji=chengji>=90?'A':chengji>=70?'B':chengji>=60?'C':'D';
	printf("等级为=%c",dengji); 
	return 0;
}