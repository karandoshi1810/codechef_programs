#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int concate(char x[],char y[]);
int btod(int x1,int x2);
int main()
{
    int testcases=0,n=0,i=0,j=0;
    scanf("%d",&testcases);
    while(testcases--)
    {
        scanf("%d",&n);
        int a[n],ans=0,max[n],max_temp=0,max_all[testcases];
        char str[32];
        char str1[32];
        for(i=0;i<n;i++)
        {
            a[i]=0;
            max[i]=0;
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                itoa(a[i],str,2);
                itoa(a[j],str1,2);
                ans = concate(str,str1);
                if(ans>max[i])
                {
                    max[i]=ans;
                }
            }

        }

            for(i=0;i<n;i++)
            {
                if(max[i]>max_temp)
                {
                    max_temp = max[i];
                }
            }
            printf("%d\n",max_temp);

        for(i=0;i<32;i++)
        {
            str[i]='\0';
            str1[i]='\0';
        }
    }
    return 0;
}

int concate(char x[],char y[])
{
    char temp1[strlen(x)+strlen(y)];
    char temp2[strlen(x)+strlen(y)];
    int temp3=0,temp4=0,answer=0;

    strcpy(temp1,x);
    strcat(temp1,y);
    strcpy(temp2,y);
    strcat(temp2,x);

    temp3 = atoi(temp1);
    temp4 = atoi(temp2);

    answer = btod(temp3,temp4);
    return answer;

}

int btod(int x1,int x2)
{
    int temp1=0,temp2=0,rem = 0,count=0,ans = 0;
    while(x1>0)
    {
        rem = x1%10;
        temp1 = temp1 + rem*pow(2,count);
        x1/=10;
        count+=1;
    }
    rem = 0,count = 0;
    while(x2>0)
    {
        rem = x2%10;
        temp2 = temp2 + rem*pow(2,count);
        x2/=10;
        count+=1;
    }

    ans = abs(temp1-temp2);

    return ans;
}
