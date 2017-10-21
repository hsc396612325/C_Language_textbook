#include <stdio.h>
int main(int argc, char *argv[])
{
	int f1,f2,f,i,N;
	printf("想看斐波那契数列数列第一项到哪一项：\n");
	scanf("%d",&N);
	f1=1;
	f2=1;
	printf("%-10d%-10d",f1,f2);
	for(i=3;i<=N;i++)
	{
		f=f1+f2;			/*思想：迭代法：即不断用新值取代变量旧值*/
		printf("%-10d",f); /*或由旧值递推出变量新值的过程*/
		f1=f2;
		f2=f;
		if(i%5==0)printf("\n");
	}
	return 0;
}