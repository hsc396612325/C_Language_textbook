#include <stdio.h>
int main(int argc, char *argv[])
{
	int d5=0,d6=0,d7=0,d8=0,d9=0;
	int i;
	double sum=0,make,av;
	for(i=1;i<=10;i++)
	{
		printf("请输入%d位学生成绩：",i);
		scanf("%lf",&make);
		sum+=make;
		if(make>=90) d9++;
		else if(make>=80) d8++;
		else if(make>=70) d7++; 
		else if(make>=60) d6++; 
		else d5++;

	}
	av=sum/10;
	printf("平均成绩=%g\n",av);
	printf("90~100有：%d人，80~89有%d人，\n",d9,d8);
	printf("70~79有：%d人，60~69有%d人，\n",d7,d6); 
	printf("60以下有：%d人\n",d5);  
	return 0;
}