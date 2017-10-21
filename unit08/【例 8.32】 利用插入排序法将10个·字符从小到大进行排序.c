#include <stdio.h>
void insert(char a[])
{
	int i,j,t;
	for(i=1;i<10;i++)
	{
		t=a[i];//当前需要插入的元素 
		for(j=i-1;j>=0&&t<a[j];j--)//j是有序表中最后一个元素
			a[j+1]=a[j];
		a[j+1]=t;
	}
		
}
int main(void)
{
	char a[11];
	int i;
	printf("请输入10个字符：\n");
	for(i=0;i<10;i++)
		a[i]=getchar();
	a[i]=0;
	insert(a);
	printf("排序后结果为：\n");
	puts(a);
}