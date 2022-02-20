#include<stdio.h>

int main()
{
	int a[]={10,20,30},b[]={40,50,60};
	int *ptr,*ptr1;
	ptr=a;
	ptr1=b;
	int n=sizeof(a)/sizeof(a[0]);
	int i,temp;
	printf("elements after swap:");
	for(i=0;i<n;i++)
	{
		temp = ptr[i];
		ptr[i] = ptr1[i];
		ptr1[i] = temp;
	}
	for(i=0;i<n;i++)
	{
		printf("a=%d ",*(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		printf("\nb=%d ",*(ptr1+i));
	}
}
