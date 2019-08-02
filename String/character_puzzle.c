#include <stdio.h>

int main()
{
    char name[100]="GDHK";
    char temp[100];
    
    for(int i=0; i<strlen(name); i++)
    {
        //printf("%c",name[i]);
        int x = (int)name[i]+2;
        char c=(char)x;
        //printf("%c",c);
        temp[i]=c;
    }
    printf("%s",temp);
    return 0;
}
