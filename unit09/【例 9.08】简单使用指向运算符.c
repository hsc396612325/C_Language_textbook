#include <stdio.h>
typedef struct student
{
	int id;
	char name[20];
	int score;
}STUDENT,*STU;

int main(void)
{
	STUDENT st[3]={{10111,"li",98},{10112,"ld",97},{10113,"lf",96}};
	STUDENT *p;
	for(p=st;p<st+3;p++)
		printf("%-6d%s\t%d\n",p->id,p->name,p->score);
		
}