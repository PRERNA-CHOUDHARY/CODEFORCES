#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;  
    cin>>t;
    int n=2*t;
    int arr[n];
      for(int i=0;i<2*t;i++)  
      {
          cin>>arr[i];
      }
     for(int i=0;i<n;i+=2) 
   {
        for(int j=1;j<n;j+=2)   
        {
            if(arr[i]==arr[j]  && j!=i+1)  
            {
            count++;  
            }
        }
    }
 cout<<count;
    return 0;
}
