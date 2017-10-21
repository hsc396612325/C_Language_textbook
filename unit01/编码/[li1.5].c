/*求圆的面积*/
#define PI 3.14159      /*编译预处理--宏替换*/
#include <stdio.h>      /*编译预处理--文件包含（标准输入/输出函数）*/
#include <math.h>       /*编译预处理--文件包含(数学函数)*/
#include <stdlib.h>     /*编译预处理--文件包含（常用函数）*/
#include <conio.h>      /*编译预处理--文件包含（文本对话框）*/
void main()
{
   float r,s;
   system("cls");              /*清屏，在conio.h中定义*/
   printf("请输入半径R=");     /*提示输入r*/
   scanf("%f",&r);             /*将输入值存入在变量r对应储存单元中*/
   if (r<0)
   {
      printf("输入错误，r不能为负值！");/*提示输入错误*/
      exit(0);                          /*停止程序执行，返回操作系统*/
   }
   s=PI*pow(r,2);
   printf("半径R=%.3f时，面积S=%.3f\n",r,s);/*限制r，s小数数位

   */
   getch();
}
