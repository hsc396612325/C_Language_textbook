#include <stdio.h>
#include <string.h>
int main (void)
{
	//(1) 
	int i,n[]={1,2,3,4,5,6,7,8,9};
	for(i=0;i<9;i++)
		n[i]=9-i;
	printf("第一题：%5d%5d\n",n[3],n[5]);
	
	//(2)
	int j=1,a[]={1,2,3,4,5,6};
	printf("第二题："); 
	for(i=0;i<4;i++)
	{
		a[i]+=i;
		j+=a[i]*i;
		printf("%5d",j);
	} 
	
	//(3)
	int b[3][5]={1,2,3,4,5,6,7,8,9,10,11};
	printf("\n第三题："); 
	for(i=0;i<3;i++)
		printf("%5d",b[i][4-i]);

	//(4)
	int c[3][4]={{0,1,2},{3,4,5,6},{7,8}};
	printf("\n第四题：\n");
	for(i=0;i<3;i++)
	{
		printf("	"); 
		for(j=i;j<4;j++)
			printf("%5d",c[2-i][j]);
		printf("\n");	
	} 
	
	//(5)
	int d[][4]={1,2,3,4,5,6,7,8,9,10,11};
	printf("\n第五题：");
	for(i=1;i<3;i++)
		for(j=i;j<4;j++)
		 	d[i][j]+=d[i][j-1];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			printf("%5d",d[i][j]); 
		
	//(6)
	char e[20];
	printf("\n第六题：\n");
	scanf("%s",e);
	printf("            %s\n",strcat(e," is a doctor")); 
	
	//(7)
	char f[16]="123456\0abcdef";
	printf("第七题："); 
	for(i=1;i<2;i++)
		printf("%5d%5d    %s\n",strlen(f),sizeof(f),f);
		
	//(8)
	char g[][5]={"ab","1234","wxyz"};
	printf("第八题：");
	for(i=1;i<2;i++)
		printf("    %s\n",g[i]);
	
	//(9)
	int h[]={10,9,8,7,6,5,4,3,2,1,0},*p1=h;
	printf("第九题：");
		printf("%5d%5d\n",*(p1+5),*p1+5); 
		
	//(10)
	int k[10]={1,2,3,4,5,6,7,8,9,10},*p2=k+8;
	printf("第十题：");
	printf("%5d\n",*++p2-8);
	 
	//(11)
	int x[][4]={1,2,3,4,5,6,7,8,9,10,11};
	int *p3[3];
	printf("第十一题：");
	for(i=0;i<3;i++)
		p3[i]=x[i];
	printf("%3d%5d\n",*(*(p3+2)+3),*(*(p3+1)+1)); 
	return 0;
}