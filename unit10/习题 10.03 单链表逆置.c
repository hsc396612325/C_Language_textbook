#include <stdio.h> 
#include <stdlib.h>
struct lianbiao
{
	int a;
	struct lianbiao *next;
};
struct lianbiao * create()
{
	int i;
	struct lianbiao *pHead,*pNew,*pEnd;
	pEnd=pHead=(struct lianbiao *)malloc(sizeof(struct lianbiao));
	for(i=0;i<10;i++)
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
		printf("%d\n",pHead->a);
		pHead=pHead->next;
	}
	printf("\n");
}
struct lianbiao *Nizhi(struct lianbiao *pHead)
{
	struct lianbiao *pi=pHead,*pi_q,*pi_h=pHead->next,*p;
	while(pi_h)
	{
		pi_q=pi;//移动 
		pi=pi_h;
		pi_h=pi->next;
		
		pi->next=pi_q;
	} 
	free(pHead);
	pHead->next->next=NULL;//原来头部指针清0 
	p=(struct lianbiao *)malloc(sizeof(struct lianbiao));
	p->next=pi; 
	return p;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
int main(void)
{
	struct lianbiao *pHead;
	pHead=create();
	output(pHead);
	pHead=Nizhi(pHead);
	output(pHead);	
}