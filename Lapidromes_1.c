#include <stdio.h>
#include<string.h>
int main(void) {
	int test_cases=0,i=0,arr1[26],arr2[26];
	scanf("%d",&test_cases);
	int results[test_cases],temp1 = test_cases,temp=0;

	while(test_cases--)
	{
	    for(i=0;i<26;i++)
        {
            arr1[i] = 0;
            arr2[i] = 0;
        }
	    char str[1001];
	    int i=0,len=0,j=0;
	    scanf("%s",str);
	    len = strlen(str)/2;
	    //char str1[len];
	    //char str2[len];

	        for(i=0;i<len;i++)
            {
                arr1[str[i]-'a']++;
            }
            for(i=((strlen(str)+1)/2);i<strlen(str);i++)
            {
                arr2[str[i]-'a']++;
            }
            int flag=0;
            for(i=0;i<26;i++)
            {
                if(arr1[i]!=arr2[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
            len=0;
    }
	return 0;
}



