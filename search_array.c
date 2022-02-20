#include<stdio.h>
int main()
{
	int arr[100];
	int *ptr;
	ptr=arr;
	int n,i,s,count=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("enter the element to search:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(s==ptr[i])
		{
			count=1;
		}
	}
	if(count==1)
     	printf("element is found at position %d",i);
	else
	    printf("element not found");
	
}
