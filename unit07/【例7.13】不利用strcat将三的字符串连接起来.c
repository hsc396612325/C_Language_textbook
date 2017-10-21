#include <stdio.h>

int main(void)
{
	char dest[61],str[3][21];
	int i,j,k;
	scanf("%s%s%s",str[0],str[1],str[2]);//注意无&，同时下标为0.1.2 
	k=0;
	for(i=0;i<3;i++)
		for(j=0;j<21;j++)
			if(str[i][j]=='\0')
				break;
			else
			{
				dest[k]=str[i][j];
				k++;
			}
	dest[k]='\0';
	printf("%s\n",dest);
	return 0;
}