#include <stdio.h>
int main (void)
{
	int a[3][5]={{35,34,33,32,31},{25,24,23,22,24},{15,14,13,12,11}};
	int *p;
	int (*q)[5];
	q=a;
	printf("q  =%X,              *q  =%X,**q    =%d\n",q,*q,**q);
	printf("q+1=%X,*(q+1)=%X,*q+1=%X,*(*q+1)=%d\n",q+1,*(q+1),*q+1,*(*q+1));
	printf("结论1：q指向0行分数组地址，*q指向0行0列元素对应地址，**q指向0行0列元素\n");
	printf("结论2: q+1指向1行分数组地址，*（q+1）指向1行0列元素对应地址\n");
	printf("       *q+1指向0行1列元素对应的地址，*(*q+1)为0行1列元素\n");
	printf("结论3：i行分数组地址：q+1，i行j列元素对应地址：*(q+i)+j,i行j列元素:*((q+i)+j)\n\n");
	for(q=a;q<a+3;q++)
	{
		for(p=*q;p<*q+5;p++)
			printf("%5d",*p);
		printf("\n");
	}
	return 0;
}