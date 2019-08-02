
#include <stdio.h>

int main()
{
    char name[100]="amma";
    char temp[100];
    int count=0;
    int length=strlen(name)-1;
    for(int i=length; i>=0; i--)
    {   
        temp[count++]=name[i];
    }
    printf("%s and %s ", name, temp);
    if(strcmp(temp,name)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    return 0;
}
