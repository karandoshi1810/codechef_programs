#include <stdio.h>

int main(void) {
	// your code goes here
	int testCases=0;
	scanf("%d",&testCases);
	while(testCases--)
	{
	    int noOfCars=0,i=0,j=0,maxSpeedCars=1,current_max=0;
	    scanf("%d",&noOfCars);
	    int carArray[noOfCars];
	    for(i=0;i<noOfCars;i++)
	    {
	        carArray[i]=0;
	        scanf("%d",&carArray[i]);
	    }
	    current_max=carArray[0];
	    for(i=1;i<noOfCars;i++)
	    {
	        if(current_max>carArray[i])
	        {
	            maxSpeedCars++;
	            current_max=carArray[i];
	        }
	    }
	    printf("%d\n",maxSpeedCars);
	    maxSpeedCars=0,noOfCars=0;
	}
	return 0;
}

