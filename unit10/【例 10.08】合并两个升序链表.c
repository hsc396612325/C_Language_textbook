#include <stdio.h>
#include <stdlib.h>
struct asd
{
	int a;
	struct asd *next;
};

struct asd *CreateLa()
{
	int i,k=1;
	struct asd *pHead,*pNew,*pEnd;
	pEnd=pHead=(struct asd *)malloc(sizeof(struct asd));
	for(i=0;i<10;i++)
	{
		pNew=(struct asd *)malloc(sizeof(struct asd));
		pNew->a=k;
		k=k+3;
		pEnd->next=pNew;
		pNew->next=NULL;
		pEnd=pNew;
	}
	return pHead;
}
struct asd *CreateLb()
{
	int i,k=1;
	struct asd *pHead,*pNew,*pEnd;
	pEnd=pHead=(struct asd *)malloc(sizeof(struct asd));
	for(i=0;i<10;i++)
	{
		pNew=(struct asd *)malloc(sizeof(struct asd));
		pNew->a=k;
		k=k+2;
		pEnd->next=pNew;
		pNew->next=NULL;
		pEnd=pNew;
	}
	return pHead;
}
struct asd *f1(struct asd *pHead_a,struct asd *pHead_b)
{
	struct asd *a,*c,*b;
	c=pHead_a;
	a=pHead_a->next;
	b=pHead_b->next;
	while(a!=NULL&&b!=NULL)
	{
		if((a->a)<=(b->a))//将a指向的节点插入 
		{
			c->next=a;
			c=a;
			a=a->next; 
		}
		else//将b指向的节点插入 
		{
			c->next=b;
			c=b;
			b=b->next; 
		}
	}
	if(a!=NULL)
		c->next=a;
	else
		c->next=b;
	free(pHead_b);
	return pHead_a; 		
}
void output(struct asd *pHead)//输出 
{
	pHead=pHead->next;
	while(pHead!=NULL)
	{
		printf("%d\t",pHead->a);
		pHead=pHead->next;
	}
	printf("\n"); 
}
int main(void)
{
	struct asd *pHead_a;
	struct asd *pHead_b;
	pHead_a=CreateLa();
	pHead_b=CreateLb();
	output(pHead_a);
	output(pHead_b);
	pHead_a=f1(pHead_a,pHead_b);
	output(pHead_a);
}