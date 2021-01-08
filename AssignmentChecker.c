#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    scanf("%s",str);
    int count=0,i=0,len=strlen(str);
    float marks=0;
    //while(str[len]!='\n')
    //{
        /*if(count>5)
        {
            break;
        }*/
        int j=0;
        char str1[4];
        char str2[3];
        for(i=0;i<7;i++)
        {
            if(i<4)
            {
                //strcpy(str1[i],str[i]);
                str1[i] = str[i];
            }
            else
            {
                //strcpy(str2[i],str[i]);
                str2[j] = str[i];
                j++;
            }

        }
        str1[4]='\0';
        str2[3]='\0';
        printf("%s",str1);
        printf("%s",str2);
       /*if(strcmp(str1,"Acov")==0)
       {
           marks+=0.5;
           if(strcmp(str2,"(A)")==0)
           {
               marks+=0.5;
           }
       }
       else if(strcmp(str1,"Bcov")==0)
       {
           marks+=0.5;
           if(strcmp(str2,"(B)")==0)
           {
               marks+=0.5;
           }
       }
       else if(strcmp(str1,"Ccov")==0)
       {
           marks+=0.5;
           if(strcmp(str2,"(C)")==0)
           {
               marks+=0.5;
           }
       }

       else if(strcmp(str1,"Dcov")==0)
       {
           marks+=0.5;
           if(strcmp(str2,"(D)")==0)
           {
               marks+=0.5;
           }
       }

       else if(strcmp(str1,"Ecov")==0)
       {
           marks+=0.5;
           if(strcmp(str2,"(E)")==0)
           {
               marks+=0.5;
           }
       }

       else if(strcmp(str1,"Fcov")==0)
       {
           marks+=0.5;
           if(strcmp(str2,"(F)")==0)
           {
               marks+=0.5;
           }
       }*/
       count++;

    //}
    //printf("%f",marks);
    return 0;
}
