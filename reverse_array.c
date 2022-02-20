#include<stdio.h>
int main()
{
	int arr[100];
	int *ptr;
	ptr=arr;
	int n,i,j,temp;
	printf("enter the size of array: ");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("after reverse:");
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp = ptr[i];
		ptr[i] = ptr[j];                  /////////// method 1
		ptr[j] = temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
}

/*for(i=n-1;i>=0;i--)
{
	printf("%d ",*(ptr+i));/////////////             method 2
}
}*/
