#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,one=0,two=0,three=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     {
         cin>>arr[i];
         if(arr[i]==1)
         one++;
         else if(arr[i]==2)
         two++;
         else if(arr[i]==3)
         three++;
     }
         int mini=min(one,two);
         mini=min(mini,three);
         cout<<mini<<"\n";
        
        while(mini--)
         {
             int on=0,tw=0,th=0;
             for(int i=0;i<n;i++)
         {
            if(arr[i]==1 && on==0)
            {
            cout<<i+1<<" ";
                arr[i]=0;
             
                on++;
            }
            if(arr[i]==2 && tw==0)
            {
            cout<<i+1<<" ";
                arr[i]=0;
                
                tw++;
            }
            if(arr[i]==3&& th==0)
            {
            cout<<i+1<<" ";
                arr[i]=0;
                th++;
            }
            
         }
         cout<<"\n";
             
         }
     

    return 0;
}
