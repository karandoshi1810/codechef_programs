/*Dry Run
Example:10 3
        3 1 1 2 3 2 1 1 3 3

0th Element(3)->Immediate Small:1st Element(1)
Calaulation: (1+1)-(0+1)+1=2*result = 2

1st Element(1)->Immediate Small:Not Available
Calaulation: result*1 = 2

2nd Element(1)->Immediate Small:Not Available
Calaulation: result*1 = 2

3rd Element(2)->Immediate Small:6th Element(1)
Calaulation: (6+1)-(3+1)+1 = 4*result=8

4th Element(3)->Immediate Small:5th Element(2)
Calaulation: (5+1)-(4+1)+1 = 16

5th Element(2)->Immediate Small:6th Element(1)
Calaulation: (6+1)-(5+1)+1=2*result=32

6th Element(1)->Immediate Small:Not Available
Calaulation: result*1

7th Element(1)->Immediate Small:Not Available
Calaulation: result*1

8th Element(3)->Immediate Small:Not Available
Calaulation: result*1

9th Element(1)->Immediate Small:Not Available
Calaulation: result*1

Final Result=32
*/

//Brute Force Approach
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    long long int chef=0,seniority_levels=0,fearfulness=1;
    cin>>chef>>seniority_levels;

    long long int queue[chef];
    for(long long int i=0;i<chef;i++)
    {
        cin>>queue[i];
    }
    for(long long int i=0;i<chef;i++)//iterating from last-first(left-right)
    {
        if(queue[i]!=1 && i!=chef-1)//if seniority is 1 and chef is first then this process is not required
        {
            for(long long int j=i+1;j<chef;j++)//iterating for finding chef with lower seniority then current chef
            {
                if(queue[j]<queue[i])
                {
                    long long int temp_i=i+1,temp_j=j+1;//queue starts from 1 but array is starting from 0, so need to increment the position of chefs by 1
                    fearfulness *= (temp_j-temp_i+1);
                    break;
                }   
            }
        } 
    }
    cout<<fearfulness%1000000007<<endl;
    return 0;
}
