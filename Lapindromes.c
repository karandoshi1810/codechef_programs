#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int test_cases=0,i=0;
	scanf("%d",&test_cases);
	int results[test_cases],temp = test_cases;
	while(test_cases--)
	{
	    char str[1000];
	    int i=0,len=0,j=0,sum1=0,sum2=0;
	    scanf("%s",str);
	    len = strlen(str)/2;
	    char str1[len];
	    char str2[len];
	    if(strlen(str)%2==0)
	    {
	        sum1=0,sum2=0;
	        j=0;
	        for(i=0;i<strlen(str);i++)
	        {
	            if(i<len)
	            {
	                str1[i] = str[i];

	            }
	            else if(i>=len)
	            {
	                str2[j] = str[i];
	                j++;
	            }
	        }
	        for(i=0;i<strlen(str1);i++)
            {
                sum1+=str1[i];
                sum2+=str2[i];
            }
	    }
	    else
	    {
	        sum1=0,sum2=0;
	        j=0;
	        for(i=0;i<strlen(str);i++)
	        {

	            if(i == (strlen(str)/2))
	            {
	                continue;
	            }
	            else
	            {
	                if(i<len)
	                {
	                    str1[i] = str[i];

	                }
	                else if(i>=len)
	                {
	                    str2[j] = str[i];
                        j++;
	                }
	           }
	        }
            for(i=0;i<strlen(str1);i++)
            {
                sum1+=str1[i];
                sum2+=str2[i];
            }
	    }
	    if((sum1==sum2))
	    {

	         results[test_cases]=1;
	    }
	    else
	    {
	        results[test_cases]=0;
	    }
	    sum1=0,sum2=0,len=0;
	}
	for(i=temp-1;i>=0;i--)
    {
        if(results[i]==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
	return 0;
}



