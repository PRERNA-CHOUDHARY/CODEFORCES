#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];   
    sort(arr,arr+n);
    int m=arr[n-1];
    for(int i=0;i<n;i++)
           { 
               sum+=(m-arr[i]);
               
           }
    cout<<sum;

    return 0;
}
