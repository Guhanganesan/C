#include<stdio.h>

int add(int *x, int *y)
{
	//printf("%d",(a+b));
	*x=30; // This will affect original values of a and b
	*y=30;
	return *x+*y;
}

int main()
{
   int a=40, b=50;
   int res = add(&a, &b);
   printf("%d \n",res);
   printf("a is %d and b is %d", a, b);
   return 0;
}

/*
Output:-

60 
a is 30 and b is 30

*/
