#include <stdio.h>
int main(int argc, char *argv[])
{
	double a;
	int k;
	printf("请输入公里数\n");
	k=scanf("%lf",&a); 
	if(k==0||a<0)
		{printf("输入错误\n");exit(1);}
	if(a<3)
 		printf("7元\n");
	else if(a>=3&&a<=6)
	    printf("%g元\n",7+(int)(a-2)*1.7);
	else
		printf("%g元\n",7+5*1.7+(int)(a-7)*2.0);
	 
	return 0;
}