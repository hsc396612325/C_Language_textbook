#include <stdio.h>
#include <string.h>
void show()
{
	printf("\n1:十进制转其他\n");
	printf("2:其他转十进制\n");
	printf("0:退出\n");
	printf("请输入你的选择：\n");
}
void ten_to_ote()
{
	int sum,n,i,j,arr[80];
	printf("请输入10进制整数:");//输入 
	scanf("%d",&sum);
	printf("请输入需要转换的进制:");
	scanf("%d",&n);
	for(i=0;sum;i++)   //转换 
	{
		arr[i]=sum%n;
		sum=sum/n;
	}
	printf("该数转换为%d进制结果为：",n);
	for(j=i-1;j>=0;j--)
		printf("%d",arr[j]);
	printf("\n");
}
void ote_to_ten()
{
	int n,i,j,sum=0; 
	char arr[80];
	printf("请输入你需要转换的进制：");
	scanf("%d",&n);
	printf("请输入数据：");
	fflush(stdin); 
	gets(arr);
	for(i=0;arr[i];i++)
	{
		sum=sum*n+arr[i]-'0';
	 	if(arr[i]<'0'||arr[i]>'0'+n)
			{printf("输入有误\n");exit(1);}
	} 
	printf("对应10进制为:%d\n",sum); 
} 
int main(void)
{
	int flag=1;
	while(flag!=0)
	{
		show();
		scanf("%d",&flag);
		switch(flag)
		{
			case 1:ten_to_ote();break;
			case 2:ote_to_ten();break; 
			case 0:exit(1);break;
		}
	}
}