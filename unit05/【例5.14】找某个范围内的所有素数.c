#include <stdio.h>
int main(int argc, char *argv[])
{
	int m,i,j=1;
	int min,max;
	int flag;
	printf("请输入一个范围:\n");
	scanf("%d %d",&min,&max);
	if(min>max)		
	{
		min=max+min;
		max=min-max;		/*保证min中的数小于max*/ 
		min=min-max;
	} 
	printf("%d~%d范围内所有素数为：\n",min,max);
	for(m=min;m<=max;m++)	/*从min枚举到max*/ 
	{	flag=1;				/*必须有保证每次内循环完后对flag进行重新赋值*/	
		for(i=2;i<m;i++)
		{
			if(m%i==0)		/*内循环从2到m-1依次枚举，看是否为m的因子*/ 
			{
				flag=0;
				break;
			}
		}
		if(flag)			/*倘若从2到m-1均不是m的因子，即flag未被赋值为0*/ 
		{
			j++;			/*对flag为被赋值为0进行输出*/ 
			printf("%-4d",m);
		}
		if(j%11==0) {printf("\n");j++;}/*控制为10个为一行进行输出*/ 
	}
	printf("\n");
	return 0;
}