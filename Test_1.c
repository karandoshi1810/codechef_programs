#include <stdio.h>

int main()
{
    char input[50];

    scanf("%s",input);

    char p1[4],p2[3];
    int j=0,i=0;
    for(i=0;i<7;i++)
    {
        if(i<4)
        {
            p1[i]=input[i];
        }
        else
        {
            p2[j++]=input[i];
        }
    }

    p1[4]='\0';
    p2[3]='\0';
    printf("%s",p1);
    printf("%s",p2);
    return 0;
}
