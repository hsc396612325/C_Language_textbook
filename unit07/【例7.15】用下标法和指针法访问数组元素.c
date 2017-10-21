#include <stdio.h>
int main (void)
{
	int b[10]={100,200,300,400,500,600,700,800,900,1000};
	int *pi=b;
	float s[8],*pf=s;
	printf("sizeof(int)=%d\n",sizeof(int)); //输出int类型所占字节数 
	printf("sizeof(float)=%d\n\n",sizeof(float));//输出float类型所占类型 

	printf("pi=%X,pi+1=%X\n",pi,pi+1);//int类型指针基类型字节数为4 
	printf("pf=%X,pf+1=%X\n\n",pf,pf+1);//int类型指针基类型字节数为4
	
	printf("pi[2]=%d\tpi[4]=%d\n",pi[2],pi[4]);//表示某个元素的方法 
	printf("b[2]=%d\tb[4]=%d\n",b[2],b[4]);
	printf("*(pi+2)=%d\t*(pi+4)=%d\n",*(pi+2),*(pi+4));
	printf("*(b+2)=%d\t*(b+4)=%d\n\n",*(b+2),*(b+4));
	
	printf("&pi[2]=%X\t&pi[4]=%X\n",&pi[2],&pi[4]);//表示某个元素对应地址的方法 
	printf("&b[2]=%X\t&b[4]=%X\n",&b[2],&b[4]);
	printf("pi+2=%X\tpi+4=%X\n",pi+2,pi+4);
	printf("b+2=%X\tb+4=%X\n\n",b+2,b+4);  

	printf("结论1:b[i]=pi[i]表示数组中下标为i的元素\n");
	printf("结论2:b=pi为数组首地址，b+i=pi+i表示下标为i元素的地址\n");
	printf("结论3:*(b+i)=*(pi+i)=b[i]=pi[i]表示数组中下标为i的元素\n");
	printf("结论4:b+i=pi+i=&b[i]=&pi[i]表示下标为i元素的地址\n");
	return 0; 
}