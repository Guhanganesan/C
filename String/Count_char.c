#include<stdio.h>
#include<string.h>
int main()
{
    char name[100]="Ranjith Kumar";
    char c='a';
    int length=strlen(name);
    int count=0;
    for(int i=length-1; i>=0; i--)
    {
        if(c==name[i])
        {
          count++;  
        }
        
    }
    printf("Count: %d",count);
  
    return 0;
}
