#include<stdio.h>
#include<string.h>
int main()
{
    int sum=0;
    for(char a='a'; a<='z'; a++)
    {
       sum+= (int)a;
    }
    printf("Sum %d",sum);
    return 0;
}
