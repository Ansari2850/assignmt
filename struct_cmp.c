#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	struct student *ptr;
};
struct student1
{
	char person[20];
};
int main()
{
	struct student *s1;
	struct student1 s2;
	int cnt=0;
	s1 = (struct student*)malloc(sizeof(struct student));
	scanf("%s",s1->name);
	printf("name :%s\n",s1->name);
	scanf("%s",s2.person);
	printf("name :%s\n",s2.person);
	for(int i=0;s1->name[i]!='\0';i++)
	{
	if(((s1->name[i]) == s2.person[i]))
	{
		cnt=1;
	}
	else
	{
		cnt=0;
	}
}
    if(cnt==1)
        printf("both are same");
    else
		printf("not same");
}
