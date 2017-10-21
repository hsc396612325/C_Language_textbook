#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[201],b[201];
	int c[201];
	int i,j,k;
	int m,n,t=0;
	printf("请输入两个大整数：\n");
	scanf("%s",a);//1.将两个数字存入到两个数组中 
	scanf("%s",b);
	m=strlen(a);//2.找出最高位 
	n=strlen(b);
	k=m>n?m:n;	
	for(i=0;i<k;i++)//3.右对齐 
		a[k-i]=a[m-i-1];
	for(i=0;i<k;i++)
		b[k-i]=b[n-i-1]; 
	for(i=0;i<=k-m;i++)//4.高位补零 
		a[i]='0';
	for(i=0;i<=k-n;i++)
		b[i]='0'; 
	for(i=k;i>=0;i--)//5。对应位相加，和超过则进 
	{
		c[i]=((a[i]-'0')+(b[i]-'0'))%10+t;
		t=((a[i]-'0')+(b[i]-'0'))/10;	
	} 
	printf("和为：\n");
	for(i=01;i<k+1;i++)
		if(c[i])
			printf("%d",c[i]); 
	printf("\n");		
	
}