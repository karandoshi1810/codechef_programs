#include<bits/stdc++.h>
#include<iostream>
#include <algorithm> 

using namespace std;
int main()
{
    int testcases=0;
    cin>>testcases;

    while(testcases--)
    {
        long int n=0;
        cin>>n;
        long long int rem[n],i=0,answer=0;
        for(i=0;i<n;i++)
        {
            rem[i]=0;
            cin>>rem[i];
        }
        long long int minimum=INT_MAX;
        for(int i=0;i<n;i++)
        {
            minimum=min(minimum,rem[i]);
            answer+=minimum;
        }
        cout<<answer<<endl;
    }
    return 0;
}
