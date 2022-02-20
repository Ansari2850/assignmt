#include<stdio.h>

int main()
{
	int a[100],b[100];
	int *ptr,*ptr1;
	ptr=a;
	ptr1=b;
	int i,n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	printf("enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		*(ptr1+i) = *(ptr+i); 
	}
	printf("enter the copied elements: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr1+i));
	}
}
