#include<stdio.h>

int main()
{
	int a=10,b=20;
	const int *const ptr=&a;   //////////////here pointer is constant and data is also constant
//	*ptr=30;             /////////////here value cannot be changed
	printf("%d\n",*ptr);
	printf("%u\n",ptr);
//	ptr=&b;               ///////////////// here address cannot be changed both address and value are consant
//	printf("%d\n",*ptr);
}
