#include<stdio.h>

int main()
{
	int a=10,b=20;
	int *const ptr=&a;   //////////////here pointer is constant
	*ptr=30;             /////////////this is a const pointer, so address is constant, but value can be changed
	printf("%d\n",*ptr);
	printf("%u\n",ptr);
//	ptr=&b;               ///////////////// here address cannot be assigned because ptr is constant so i cannot hold address of b
//	printf("%d\n",*ptr);
}
