#include <stdio.h>
#include <string.h>
struct STU
{
	char name[10];
	int num;
};
void f1(char *name,int num)
{
	struct STU s[2]={{"Sundan",20044},{"Penghua",20042}};
	num=s[0].num;
	strcpy(name,s[0].name);
}
void f2(struct STU *q)
{
	struct STU s[2]={{"Sundan",20044},{"Penghua",20042}};
	q->num=s[0].num;
	strcpy(q->name,s[0].name);
}
int main(void)
{
	struct STU s[2]={{"yangshan",20041},{"lisigou",20042}},*p;
	p=&s[1]; 
	f1(p->name,p->num);
	f2(&s[0]);
	printf("%s %d\n",p->name,p->num);
	printf("%s %d\n",s[0].name,s[0].num);
	return 0;
} 