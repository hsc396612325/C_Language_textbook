#include <stdio.h>
#include <stdlib.h>
struct lianbiao
{
	int date;
	struct lianbiao *next;
};
int iCound=0;  
struct lianbiao *create()
{
	struct lianbiao *pHead,*pEnd,*pNew;
	int a;
	printf("请输入一些正整数，输入-1停止输入:\n"); 
	pHead=pEnd=(struct lianbiao *)malloc(sizeof(struct lianbiao));
	while(1)
	{
		scanf("%d",&a);
		if(a>0)
		{
			iCound++; 
			pNew=(struct lianbiao*)malloc(sizeof(struct lianbiao));
			pNew->date=a;
			pEnd->next=pNew;
			pEnd=pNew;
		}
		else
		{
			pNew->next=NULL;
			break;
		}
	}
	return pHead;
}
void output(struct lianbiao *pHead)
{
	pHead=pHead->next;
	while(pHead)
	{
		printf("%d\t",pHead->date);
		pHead=pHead->next;
	}
}
void sore(struct lianbiao *pHead)
{
	int i,j,flag;
	struct lianbiao *pi_q,*pi,*pi_h,*pt;
	for(i=0;i<iCound;i++)
		for(j=0,flag=0,pi=pHead;j<iCound-i-1;j++)
		{
			if(flag==0)
			{
				pi_q=pi;
				pi=pi->next;
				pi_h=pi->next;
			}
			else
			{
				pi_q=pi_h;
				pi_h=pi->next;
			}
			flag=0;
			if((pi->date)<(pi_h->date))
			{
				pt=pi->next;
				pi->next=pi_h->next;
				pi_h->next=pt;
				
				pt=pi_q->next;
				pi_q->next=pi_h->next;
				pi_h->next=pt;
				flag=1;	
			}
		} 
	
}
int main(void) 
{
	struct lianbiao *pHead;
	pHead=create();
	output(pHead);
	sore( pHead); 
	output(pHead);
}
