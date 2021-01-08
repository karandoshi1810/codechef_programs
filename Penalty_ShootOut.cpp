#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int testcases=0,shoots=0;
    long long int teamA=0,teamB=0,remainingA=shoots,remainingB=shoots,i=0,result=0;
    cin>>testcases;
    while(testcases--)
    {
        
        cin>>shoots;
        string shots = "";
        cin>>shots;
        result = 2*shoots;
        teamA=0,teamB=0,remainingB=shoots,remainingA=shoots;
        for(i=0;i<(2*shoots);i++)
        {
            if(teamA>teamB+remainingB || teamB>teamA+remainingA)
            {
                result=i;
                break;
            }
            if(i%2==0)
            {
                
                  teamA += (shots[i]-48);
                  remainingA--;
            }
            else
            {
                    teamB+=(shots[i]-48);
                    remainingB--;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}