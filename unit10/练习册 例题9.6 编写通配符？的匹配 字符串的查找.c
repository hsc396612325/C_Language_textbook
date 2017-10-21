#include <stdio.h>
int main (void)
{
	char *substring,*string;
	int same;
	substring="???gram";
	string ="this program return index of substing";
	same=pattern_index(substring,string);
	if(same)
		printf("子串起始位置%d\n",same);
	else
		printf("匹配不成功\n");
	
} 
int pattern_index(char substr[],char str[])
{
	int i,j,k;
	for(i=0;str[i];i++)
		for(j=i,k=0;(str[j]==substr[k])||(substr[k]=='?');j++,k++)
			if(!substr[k+1])
				return i;
	return 0;
}