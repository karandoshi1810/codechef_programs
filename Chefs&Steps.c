#include <stdio.h>
int main(void) {
	// your code goes here
	int test_cases=0,n=0,k=0,i=0;
	scanf("%d",&test_cases);
	while(test_cases--)
	{
	    scanf("%d%d",&n,&k);
	    int distances[n];
	    char possiblities[n];
	    for(i=0;i<n;i++)
	    {
	        distances[i]=0;
	        possiblities[i]='\0';
	    }
	    possiblities[n]='\0';
	    for(i=0;i<n;i++)
        {
            scanf("%d",&distances[i]);
	        if(distances[i]%k==0)
	        {
	            possiblities[i]='1';
	        }
	        else
	        {
	            possiblities[i]='0';
	        }
        }
        //possiblities[n+1]='\0';
	    printf("%s",possiblities);

	}
	return 0;
}

