#include<stdio.h>
void print(int *ptr, int n)
{
	int i;
	printf("\nthe array elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
}

int main()
{
	int arr[100],n,i;
	int *ptr;
	ptr=arr;
	printf("enter the size of array: \n");
	scanf("%d",&n);
	printf("enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	print(arr,n);
}
