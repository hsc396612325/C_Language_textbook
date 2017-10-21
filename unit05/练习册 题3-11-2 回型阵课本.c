#include <stdio.h>
int main(void)
{
	int i,j,k,n;	//i:行数，k：中间的数，j： 
	printf("请输入一个整数");
	scanf("%d",&n);
	k=1;
	for(i=0;i<n;i++)		//控制行数 
	{
		for(j=1;j<k;j++)	//j从1递加为K-1 
			printf("%3d",j);
		for(j=0;j<-2*k+n+2;j++)//k重复-2k+n+2次（解方程） 
			printf("%3d",k);
		for(j=k-1;j>0;j--)  //j从k-1变为1 
			printf("%3d",j);
		printf("\n");
		if(k<=n/2)		// k从1递加为n/2,在从n/2递减为1 
			k++;
		else
			k--;
		if(n%2==0&&i==n/2)//偶数微调 
			k--;
	}
	return 0;
}