#include <stdio.h>
int main(int argc, char *argv[])
{
	double i,n,PI=0;
	printf("请输入精确到多少：\n");
	scanf("%lf",&n);
	for(i=1;i<=n;i+=4)
	{
		PI+=(1/i-1/(i+2));	
	}
	printf("PI=%lf\n",4*PI);
	return 0;
}
/*失误点1.i,n为double型*/
/*失误点2.输入输出格式为%lf*/
/*失误点3.循环步长为4，公式所算出来为PI/4*/ 