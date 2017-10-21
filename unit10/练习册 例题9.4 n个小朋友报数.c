#include <stdio.h>
struct boy
{
	int no;
	struct boy *next;
};
struct boy *set(int n)
{
	int i;
	struct boy *pEnd,*pHead=NULL,*pNew;
	for(i=0;i<n;i++)
	{
		pNew=(struct boy*)malloc(sizeof(struct boy));
		pNew->no=i+1;
		if(pHead==NULL)
			pHead=pNew;
		else
			pEnd->next=pNew;
		pEnd=pNew;
	} 
	pEnd->next=pHead;
	return pHead;
}
 int last(struct boy *pHead,int m)
 {
 	int i;
 	struct boy *t=pHead,*q=pHead;
 	while(q->next!=t)
 		q=q->next;//q指向尾节点 
	while(t!=t->next)
	{
		for(i=1;i<m;i++)
		{
			q=t;   //q为t的前节点 
			t=t->next;//t移动		
		}
		q->next=t->next;//删除 
		t=t->next; //t移动 
	}
	return (t->no);
 }
int main(void)
{
	int i,n,m;
	struct boy *pHead;
	printf("请输入m和n："); 
	scanf("%d%d",&n,&m);
	pHead=set(n);
	printf("%d\n",last(pHead,m)); 
	
}