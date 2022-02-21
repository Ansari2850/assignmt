#include<stdio.h>

int main()
{
	int a=10,b=20;
	int const *ptr=&a;   //////////////here data is constant, it is pointer to constant integer
//	*ptr=30;               /////////////its invalid, it gets an error (read only error) value cannot be changed
//	printf("%d",*ptr);
    printf("%u\n",ptr);
    ptr = &b;                /////////////but address is not constant it can be changed
    printf("%d\n",*ptr);
    printf("%u",ptr);
}
