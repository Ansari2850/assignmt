#include <stdio.h>
#define N 5
int main(){
   const int a[N]={1,2,3,4,5};
    int max=0,min=0,i;
    for(i=0;i<N;i++)
	{
        if(a[i]>max)
		{
            min=max;
            max=a[i];
        }
        else if(a[i]>min)
		{
            min=a[i];
        }
    }
    printf("the second largest number is %d",min);
    return 0;
}
