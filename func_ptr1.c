#include<stdio.h>
int add(int , int);
int main()
{
    int a=10,b=20;
    int res;
    int (*f1_ptr)(int,int) = add; ////////method 1
    res=f1_ptr(a,b);
//    int (*f1_ptr)(int,int) = &add;///////method 2
//    res=(*f1_ptr)(a,b);
    printf("%d",res);
}

int add(int a,int b)
{
    return(a+b);
}



///////example 2
/*void my_print(char , char[] );

void (*fun_ptr)(char, char[]) = my_print;
fun_ptr('c',"abc");*/
