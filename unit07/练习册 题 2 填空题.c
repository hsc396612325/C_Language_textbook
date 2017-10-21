#include <stdio.h>
#include <string.h>

void tiankong1()
{
	int a[10],b[10],i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=1;i<10;i++)
		b[i-1]=a[i]+a[i-1];
	for(i=0;i<9;i++)
	{
		printf("%5d",b[i]);
		if((i+1)%3==0)
			printf("\n");
	}
}

void tiankong2()
{
	int i,j;
	char str[]="I am a student";
	for(i=j=0;str[i]!=0;i++)
	{
		if(str[i]==' ')
			str[j]=str[++i];
		else
			str[j]=str[i];
		j++;
	}
	str[j]='\0';
	puts(str);
}

void tiankong3()
{
	int i,sum=0,count=0;
	int a[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		if(a[i]>0)
		{
			count++;
			sum+=a[i];
		}
	printf("sun=%d,count=%d\n",sum,count);
}

void tiankong4()
{
	int a[5],m,i,n,count=0;
	printf("请输入数组元素：\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("请输入要查找的值:\n");
		scanf("%d",&m);
	for(i=0;i<5;i++)
		if(a[i]==m)
		{
			printf("找到该数，位置为：%d\n",i+1);
			count=1;
		}
	if(count==0) 
	printf("未找到该数");
}

void tiankong5()
{
	char str1[100],str2[100],c;
	int i,s;
	printf("请输入一个字符串：\n");
	gets(str1);
	printf("请继续输入一个字符串：\n");
	gets(str2);
	i=0;
	while(str1[i]==str2[i]&&(str1[i]||str2[i]))
		i++;
	s=str1[i]-str2[i];
	printf("%d\n",s);
	
}

void tiankong6()
{
	int i;
	char c[100],ch;
	for(i=0;i<99;i++)
	{
		if((ch=getchar())=='\n')
			break;
		if(ch==' ')
			ch='#';
		c[i]=ch;
	}
	c[i]=0;
	puts(c);
}

void tiankong7(int x,int a[])
{
	int i=0,t;
	do
	{
		t=x%2;
		a[i++]=t;
		x/=2;
	}while(x);
	
}

void tiankong8()
{
	char a[]="abc",b[20]="abcd",c[20];
	strcpy(c,strcat(b,a));
	puts(c);
}

void tiankong9()
{
	char s[80];
	int i=0;
	gets(s);
	while(s[i])
	{
		if(s[i]<='z'&&s[i]>'a')
			s[i]='z'+'a'-s[i];
		i++;
	}
	puts(s);
}

void tiankong10()
{
	int i,j,a[3][4]={{0,1,2},{3,4,5,6},{7,8}};
	for(i=0;i<3;i++)
	{
		for(j=i;j<4;j++)
			printf("%3d",a[2-i][j]);
		printf("\n");
	}
}
void tiankong11()
{
	char st[16]="123456\0abcdef";
	printf("%d %d %s\n",strlen(st),sizeof(st),st);
}
void tiankong12()
{
	int x,y,i,j,u,v,a[10];
	printf("input x:\n");
	scanf("%d",&x);
	y=x;
	i=0;
	do
	{
		u=y/2;
		a[i]=y%2;
		i++;
		y=u;
	}while(y>=1);
	for(j=i-1;j>=0;j--)
		printf("%d",a[j]);
}
int main (void)
{
	/*tiankong7
	int i;
	int a=12;
	int b[20];
	tiankong7(a,b);
	for(i=0;i<20;i++)
		printf("%d ",b[i]);*/
	tiankong12();
	return 0;	
}