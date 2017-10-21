#include <stdio.h>
typedef struct  person
{
	int num;
	char name[21];
	int s[3];
	float aver;
} PERSON;
void Input(PERSON *p)
{
	scanf("%d%s%d%d%d",&p->num,&p->name,&p->s[0],&p->s[1],&p->s[2]);
	p->aver=(p->s[0]+p->s[1]+p->s[2])/3.0;		
}
int main(void)
{
	PERSON st;
	printf("请输入学生的信息：\n");
	Input(&st);
	printf("\n输入的信息如下：");
	printf("%d\t%s\t%d %d %d %5.2f\n",st.num,st.name,st.s[0],st.s[1],st.s[2],st.aver); 
}