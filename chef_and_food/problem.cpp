
#include<bits/stdc++.h>
using namespace std;
int largest(int arr[], int n)
{
    return *max_element(arr,arr+n);
}
 int main()
 {
     int testcases=0;
     cin>>testcases;

     while(testcases!=0)
     {
         int num;
         cin>>num;
         int stores[num],varities[num],people[num],final[num];;
         for(int i=0;i<num;i++)
         {
             cin>>stores[i]>>varities[i]>>people[i];
             final[i] = (people[i]/stores[i])*(varities[i]);
         }
         cout<< largest(final,num)<< endl;
         testcases--;
     }
     return 0;
 }