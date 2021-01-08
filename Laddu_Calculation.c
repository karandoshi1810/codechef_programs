#include<stdio.h>
#include<string.h>

int main()
{
    int testcases=0;
    scanf("%d",&testcases);
    while(testcases--)
    {
        int noOfActivities=0,i=0,value=0,redeemCount=0;
        int rank=0,bugIntensity=0;
        static int laddu=0;
        char origin[10],activitiyDefination[16];
        scanf("%d %s",&noOfActivities,origin);
        for(i=0;i<noOfActivities;i++)
        {
            scanf("%s",activitiyDefination);
            if(strcmp(activitiyDefination,"CONTEST_WON")==0)
            {
                scanf("%d",&rank);
                if(rank>20){laddu+=300;}
                else if(rank<=20){laddu +=(300+(20-rank));}
            }
            else if(strcmp(activitiyDefination,"TOP_CONTRIBUTOR")==0){
                laddu+=300;
            }
            else if(strcmp(activitiyDefination,"BUG_FOUND")==0){

               scanf("%d",&bugIntensity);
               laddu+=bugIntensity;
            }
            else if(strcmp(activitiyDefination,"CONTEST_HOSTED")==0){
                laddu+=50;
            }


        }
        if(strcmp(origin,"INDIAN")==0)
        {

            while(laddu>=200)
            {
                    redeemCount++;
                    laddu-=200;
            }
        }
        else{

            while(laddu>=400)
                {
                        redeemCount++;
                        laddu-=400;
                }
            }
        printf("%d\n",redeemCount);
        noOfActivities=0,i=0,value=0,redeemCount=0,laddu=0,rank=0,bugIntensity=0;
    }
    return 0;
}



