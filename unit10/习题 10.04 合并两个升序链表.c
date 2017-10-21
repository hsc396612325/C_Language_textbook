#include <stdio.h>
#include <stdlib.h>
struct lianbiao
{
	int a;
	struct lianbiao *next;
};
struct lianbiao *create_a()
{
	int i;
	struct lianbiao *pHead,*pNew,*pEnd;
	pHead=pEnd=(struct lianbiao *)malloc(sizeof(struct lianbiao));
	for(i=0;i<10;i+=2)
	{
		pNew=(struct lianbiao *)malloc(sizeof(struct lianbiao));
		pNew->a=i;
		pNew->next=NULL;
		pEnd->next=pNew;
		pEnd=pNew;
	}
	return pHead;
}
struct lianbiao *create_b()
{
	int i;
	struct lianbiao *pHead,*pNew,*pEnd;
	pHead=pEnd=(struct lianbiao *)malloc(sizeof(struct lianbiao));
	for(i=1;i<20;i+=2)
	{
		pNew=(struct lianbiao *)malloc(sizeof(struct lianbiao));
		pNew->a=i;
		pNew->next=NULL;
		pEnd->next=pNew;
		pEnd=pNew;
	}
	return pHead;
}
void output(struct lianbiao *pHead)
{
	pHead=pHead->next;
	while(pHead)
	{
		printf("%d\t",pHead->a);
		pHead=pHead->next;
	}
	printf("\n");
}
void hebing(struct lianbiao *La,struct lianbiao *Lb)
{
	struct lianbiao *a,*b,*c;
	c=La;
	a=La->next;
	b=Lb->next;
	while(a&&b)
	{
		if((a->a)<(b->a))
		{
			c->next=a;//连接 
			c=a;//c的移动 
			a=a->next;//a到移动 
		}
		else
		{
			c->next=b;
			c=b;
			b=b->next;
		} 
	} 
	if(a)
		c->next=a;
	else
		c->next=b;
} 
int main (void)
{
	struct lianbiao *La,*Lb;
	La=create_a();
	Lb=create_b();
	output(La);
	output(Lb);
	hebing(La,Lb);
	output(La);
}