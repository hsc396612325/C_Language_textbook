#include <stdio.h>
int main(int argc, char *argv[])
{
	long x;
	int k,wan,qian,bai,shi,ge; 
	printf("请输入一位不大于100000的数\n");
	k=scanf("%ld",&x);
	if(k==0) 
		{printf("输入的不为数字\n");exit(1);} 
	if(x<0&&x>100000)
		{printf("输入的数字超出范围\n");exit(1);}
	wan=x/10000;
	qian=x%10000/1000;
	bai=x%1000/100;
	shi=x%100/10;
	ge=x%10;
	if(wan!=0)
		printf("该数字为五位数，个位为%d,十位为%d，百位为%d,千位为%d，万位为%d\n",ge,shi,bai,qian,wan);
	else if(qian!=0)
		printf("该数字为四位数，个位为%d,十位为%d，百位为%d,千位为%d\n",ge,shi,bai,qian); 
	else if(bai!=0)
		printf("该数字为三位数，个位为%d,十位为%d，百位为%d\n",ge,shi,bai); 
    else if(shi!=0)
		printf("该数字为二位数，个位为%d,十位为\n%d",ge,shi); 
	else if(ge!=0)
		printf("该数字为一位数，个位为%d\n",ge); 
	else
	    printf("该数字为零\n");
		return 0;
}