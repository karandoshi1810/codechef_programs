#include<stdio.h>
int main()
{
    int testcases=0;
    scanf("%d",&testcases);
    while(testcases--)
    {
        int playing_time=0,i=0;
        int noOfCoins=0,temp_noOfCoins=0;
        int I=0,Q=0;
        scanf("%d",&playing_time);
        while(playing_time--)
        {
            scanf("%d %d %d",&I,&noOfCoins,&Q);
            temp_noOfCoins=noOfCoins;
            if(temp_noOfCoins%2==0)
            {

                if((I==1 && (Q==1||Q==2)) || (I==2 && (Q==1 || Q==2)))
                {

                    printf("%d\n",temp_noOfCoins/2);
                }
            }
            else
            {
                if((I==1 && Q==2) || (I==2 && Q==1))
                {
                    printf("%d\n",(temp_noOfCoins/2)+1);
                }
                else if((I==1 && Q==1) || (I==2 && Q==2))
                {
                    printf("%d\n",temp_noOfCoins/2);
                }
            }
            noOfCoins=0,I=0,Q=0,temp_noOfCoins=0;
        }
    }
return 0;
}
