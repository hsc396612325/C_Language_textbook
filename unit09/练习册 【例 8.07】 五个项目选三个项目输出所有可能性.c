#include <stdio.h>
int main (void)
{
	int s1,s2,s3,n=0;
	for(s1=0;s1<5;s1++)
		for(s2=0;s2<5;s2++)
			for(s3=0;s3<5;s3++)
				if(s1!=s2&&s1!=s3&&s2!=s3)
					printf("No.%02d: p%dp%dp%d\t",n,s1+1,s2+1,s3+1,n++);		
}