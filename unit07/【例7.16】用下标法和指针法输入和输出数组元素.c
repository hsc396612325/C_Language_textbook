#include <stdio.h>

int main(void)
{
	int array[6],i=0;
	int *p;
	p=array;
	printf("请输入6个整数：\n");
	while(p<(array+6))
		scanf("%d",p++);
	
	printf("利用array[i]输出数组：\n");//1.数组名，下标法 
	for(i=0;i<6;i++)
		printf("%-4d",array[i]);
	
	printf("\n利用*(array+i)输出数组：\n");//2.数组名，指针法
	for(i=0;i<6;i++) 
		printf("%-4d",*(array+i));
	p=array;//第10行p发生变化 
	printf("\n利用p[i]输出数组：\n"); //3.指针变量，下标法
	for(i=0;i<6;i++)
		printf("%-4d",p[i]);
		
	printf("\n利用*(p+i)输出数组：\n");//4.指针变量，指针法
	for(i=0;i<6;i++)
		printf("%-4d",*(p+i));
		
	printf("\n利用*p++输出数组：\n");//5.指针变量，指针法，效率最高
	while(p<(array+6))
		printf("%-4d",*p++); 
		 
	return 0;
}