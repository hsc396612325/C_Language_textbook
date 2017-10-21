/*求三个数的平均值*/
#include<stdio.h>
/*定义函数average()*/
float average(float x,float y,float z)
{
   float aver;
   aver=(x+y+z)/3;
   return(aver);
}
void main()
{
   float a,b,c,ave;
   printf("请输入3个数a,b,c:");
   scanf("%f,%f,%f",&a,&b,&c);
   ave=average(a,b,c);
   printf("average=%f",ave);
   getch();
}
