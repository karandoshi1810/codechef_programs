
#include<stdio.h>
#include<string.h>

/*int activityClassification(char *activity)
{
    if(strcmp(activity,"CONTEST-WON")==0)
    {
        return 1;
    }
    else if(strcmp(activity,"TOP_CONTRIBUTOR")==0){
        return 2;
    }
    else if(strcmp(activity,"BUG_FOUND")==0){
        return 3;
    }
    else if(strcmp(activity,"CONTEST_HOSTED")==0){
        return 4;
    }
}*/
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
            if(strcmp(activitiyDefination,"CONTEST-WON")==0)
            {
                printf("Enter rank:\n");
                scanf("%d",&rank);
                if(rank>20){laddu+=300;}
                else if(rank<20){laddu +=(300+(20-rank));}
            }
            else if(strcmp(activitiyDefination,"TOP_CONTRIBUTOR")==0){
                laddu+=300;
            }
            else if(strcmp(activitiyDefination,"BUG_FOUND")==0){
                printf("Enter bug Intensity:");
               scanf("%d",&bugIntensity);
               laddu+=bugIntensity;
            }
            else if(strcmp(activitiyDefination,"CONTEST_HOSTED")==0){
                laddu+=50;
            }

            /*value=activityClassification(activitiyDefination);
            switch(value){
            case 1:

                scanf("%d",&rank);
                if(rank>20)
                {
                    laddu+=300;
                }
                else
                {
                    laddu+=(300+(20-rank));
                }
                rank=0;
                break;
            case 2:
                laddu+=300;
                break;
            case 3:

                scanf("%d",&bugSeverity);
                laddu+=bugSeverity;
                bugSeverity=0;
                break;
            case 4:
                laddu+=50;
                break;
            }*/
        }
        if(strcmp(origin,"INDIAN")==0)
        {
            while(laddu>=200)
            {
                if(laddu%200==0)
                {
                    redeemCount++;
                    laddu-=200;
                }

            }
        }
        else{
            while(laddu>=400)
                {
                    if(laddu%400==0)
                    {
                        redeemCount++;
                        laddu-=400;
                    }
                }
            }
        printf("%d\n",redeemCount);
        noOfActivities=0,i=0,value=0,redeemCount=0,laddu=0,rank=0,bugIntensity=0;
    }
    return 0;
}



