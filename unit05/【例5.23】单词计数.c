#include <stdio.h>
#define IN 0
#define OUT 1
int main(int argc, char *argv[])
{
	int c,n1,nw,nc,state;
	state=OUT;
	n1=nw=nc=0;	/*n1:输入行数，nw：单词数，nc：字符数*/ 
	while((c=getchar())!=EOF)
	{
		++nc;				/*计算字符数*/ 
		if(c=='\n')
		++n1;				/*如果输入换行，则加一次行数*/ 
		if(c==' '||c=='\n'||c=='\t')
		state=OUT;			/*如果遇到空格，回车，制表state改变状态*/
		else if (state==OUT)/*OUT表示不在单词中,IN表示在单词中*/ 
		{
			state=IN;		/*如果不在单词状态中，改变状态并nw+1*/ 
			++nw;
		}
	}	
	printf("%d %d %d\n",n1,nw,nc);
	return 0;
}