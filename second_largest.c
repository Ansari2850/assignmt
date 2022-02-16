#include<stdio.h>
#define n 5
int main()
{
	int arr[n],i;
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max;
	int secondmax;
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			secondmax=max;
			max=arr[i];
		}
		else if(arr[i]>secondmax && arr[i]<max)
		{
			secondmax=arr[i];
		}
	}
	printf("the second largest element in array: %d",secondmax);
	return 0;
}
