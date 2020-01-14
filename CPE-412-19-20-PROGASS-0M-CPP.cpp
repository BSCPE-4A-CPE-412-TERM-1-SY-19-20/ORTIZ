#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,len,count=0;
    
    printf("\n Enter string : ");
    
    gets (str);
    len=strlen(str);
    
    
    for (i=0;i<=len;i++)
    {
        if (str[i]=='b')
        {
            count++;
        }
        if(count>5)
        {
            printf ("\n invalid input");
            return 0;
        }
    }
    if (count==0)
    {
        printf ("\n invalid input");
    }
    else
    {
        printf ("VALID");
    }
    return 0;
}
