#include <stdio.h>
#define PI 3.14


int main(){
    float area;
    int square;
    int rectangle;
    int l=5,b=7,s=4;
    int r=5,choice;
    printf("enter choice");
    scanf("%d",&choice);
    switch(choice)
	{
    case 1:
         area=PI*r*r;
         printf("area of the circle is %f",area);
         break;

	case 2:
	     square=s*s;
	     printf("area of square %d",square);
	     break;
	case 3:
	     rectangle=l*b;
     	 printf("area of rectanglr %d",rectangle);
    	 break;
	default:
	    printf("print nothing");
	}
}
