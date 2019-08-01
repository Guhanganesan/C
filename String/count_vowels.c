#include<stdio.h>
#include<string.h>
int main()
{
    char name[100]="Ranjith Kumar";
    int length=strlen(name);
    int count=0;
    for(int i=length-1; i>=0; i--)
    {
        if('a'==name[i] || 'e'==name[i] || 'i'==name[i] || 'o'==name[i]||
        'u'==name[i])
        {
          count++;  
        }
        
    }
    printf("Count: %d",count);
  
    return 0;
}
