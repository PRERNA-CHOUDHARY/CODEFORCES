#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,count=0;   //4
    cin>>t;
    int arr[2*t];   //8 
      // cout<<2*t;
      for(int i=0;i<2*t;i++)  
      {
          cin>>arr[i];
       //   cout<<arr[i];
      }

       
        
        t--;
     for(int i=0;i<=2*t;i+=2)   //0
   {
     //   cout<<arr[i]<<"\n";
        for(int j=1;j<=2*t;j+=2)  //1 3 5 
        {
          //  cout<<arr[i]<<":"<<i<<" "<<arr[j]<<":"<<j<<"\n";
            if(arr[i]==arr[j]  && j!=i+1) //100  
            count++;  //1 
            
        }
    }


    cout<<count;

    return 0;
}
