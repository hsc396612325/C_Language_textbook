#include <stdio.h>
struct STU
{
	int nam;
	float TotelScore;
};
void f(struct STU p)
{
	struct STU s[2]={{20044,550},{20045,537}};
	p.nam=s[1].nam;
	p.TotelScore=s[1].TotelScore;
}
int main(void)
{
	struct STU s[2]={{20041,703},{20042,580}};
	f(s[0]);
	printf("%d %3.0f\n",s[0].nam,s[0].TotelScore);
}