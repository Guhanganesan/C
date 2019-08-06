#include <stdio.h>

int main()
{
    int i=5;
    int *p;
    p=&i;
    
    
    printf("%d \n", p); //add
    printf("%d \n", *p);//value
    
    int a[5]={3,5,7,8,6};
    p=&a[0];
    printf("%d \n",p); //addr
    printf("%d \n",*p); //3 
    
    //p=p+2;
    //printf("%d \n",*p); //7
    
    for(int k=0; k<5; k++)
    {
        printf("%d \n",*p);
        p++;
    }

    return 0;
}
