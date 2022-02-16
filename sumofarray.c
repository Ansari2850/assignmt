#include<stdio.h>

int sum(int arr[], int n)
{
	if(n<0)
	{
		return 0;
	}
	else
	{
		return (arr[n] + sum(arr,n-1));
	}
}
int main()
{
	int arr[]={10,20,30,40,50},i;
	int n = sizeof(arr)/sizeof(arr[0]);
	int res=sum(arr,n);
	printf("sum of array elements: %d",res);
	return 0;
}
