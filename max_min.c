#include<stdio.h>
int maximum(int arr[], int n, int max)
{
	if(n>0)
	{
		if(arr[n]>max)
		{
			max = arr[n];
		}
		return (maximum(arr,n-1,max));
	}
	else
	{
		return max;
	}
}

/*int minimum(int arr[], int n, int min)
{
	if(n>0)
	{
		if(arr[n]<min)
		{
			min=arr[n];
		}
		return (minimum(arr,n-1,min));
	}
	else
	{
		return min;
	}
}*/
int main()
{
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	int max,min;
	max=arr[0];
    int largest=maximum(arr,n,max);
    printf("the max element is %d",largest);
  //  min=arr[0];
 //   int smallest=minimum(arr,n,min);
   // printf("the min element is %d",smallest);
    return 0;
}
