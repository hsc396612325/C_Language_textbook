#include <stdio.h>
#include <stdlib.h>
#define N 20
#define M 1
struct lianbiao
{
	int a;
	struct lianbaio *next;
};
struct lianbiao *create()
{
	int i;
	struct lianbiao *pHead,*pNew,*pEnd;
	pHead=pEnd=(struct lianbiao *)malloc(sizeof(struct lianbiao));
	pHead->a=1; 
	for(i=2;i<=N;i++)
	{
		pNew=(struct lianbiao *)malloc(sizeof(struct lianbiao));
		pNew->a=i;
		pNew->next=pHead;
		pEnd->next=pNew;
		pEnd=pNew;
	}
	return pHead;
}
void output(struct lianbiao *pHead)
{
	struct lianbiao *pt=pHead;
	while(pt->next!=pHead)
	{
		printf("%d\t",pt->a);
		pt=pt->next;
	}
	printf("%d\t",pt->a);
	printf("\n");
}
struct lianbiao *f1(struct lianbiao *pHead)
{
	struct lianbiao *pi=pHead,*pi_q=pHead->next;
	int i;
	while(pi_q->next!=pi)
		pi_q=pi_q->next; 
	while(pi!=pi->next)
	{
		for(i=0;i<M-1;i++)
		{
			pi_q=pi;
			pi=pi->next;
		}
		pi_q->next=pi->next;
		pi=pi->next;
	}
	return pi;
}
int main(void)
{
	struct lianbiao *pHead;
	pHead=create();
	output(pHead);
	pHead=f1(pHead);
	printf("%d\n",pHead->a);
	return 0;
}