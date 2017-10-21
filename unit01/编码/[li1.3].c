 /*该程序求三个数的平均值，同时也是一个自定义函数示例程序1*/
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
   a=6.5;b=4.2;c=25.4;
   ave=average(a,b,c);
   printf("average=%f",ave);
   getch();
}
