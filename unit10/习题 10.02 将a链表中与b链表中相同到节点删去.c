#include <stdio.h>
struct lianbiao
{
	int num_i;
	double num_d;
	struct lianbiao *next;
};
struct lianbiao *create_a()
{
	int i;
	int k=0;
	struct lianbiao *pHead,*pNew,*pEnd;
	pEnd=pHead=(struct lianbiao *)malloc(sizeof(struct lianbiao)); 
 	for(i=0;i<10;i++)
	{
		pNew=(struct lianbiao *)malloc(sizeof(struct lianbiao)); 
		pNew->num_i=k+1;
		pNew->num_d=k+2;
		pEnd->next=pNew;
		pNew->next=NULL;
		pEnd=pNew;
		k+=2;
	}
	return pHead;		
}
struct lianbiao *create_b()
{
	int i;
	int k=0;
	struct lianbiao *pHead,*pNew,*pEnd;
	pEnd=pHead=(struct lianbiao *)malloc(sizeof(struct lianbiao)); 
 	for(i=0;i<5;i++)
	{
		pNew=(struct lianbiao *)malloc(sizeof(struct lianbiao)); 
		pNew->num_i=k+1;
		pNew->num_d=k+2;
		pEnd->next=pNew;
		pNew->next=NULL;
		pEnd=pNew;
		k+=4;
	}
	return pHead;		
}
void output(struct lianbiao *pHead)
{
	pHead=pHead->next;
	while(pHead)
	{
		printf("%d %g\n",pHead->num_i,pHead->num_d);
		pHead=pHead->next;
	}
	printf("\n");
}
void f1(struct lianbiao *La,struct lianbiao *Lb)
{
	int i,j;
	struct lianbiao *a,*a_1,*b;
	a=La;
	for(i=0;i<10;i++)
	{
		a_1=a;
		a=a->next;
		b=Lb->next;
		for(j=0;j<5;j++)
		{
			if(a->num_i==b->num_i&&a->num_d==b->num_d)
			{
				a_1->next=a->next;
				break;
			}
			b=b->next;
		}
	}	
}
int main (void)
{
	struct lianbiao *La,*Lb;
	La=create_a();
	Lb=create_b();
	output(La);
	output(Lb);
	f1(La,Lb);
	output(La);
}