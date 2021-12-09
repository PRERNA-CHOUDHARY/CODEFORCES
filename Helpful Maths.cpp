
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=((str.length()+1)/2),j=0;
    int arr[n];
    // cout<<n;
    for(int i=0;i<n;i++)
    {
        arr[i]=str[j]-48;
        j+=2;
        // cout<<arr[i]<<"\t";
        // cout<<str<<"\t";
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
            
        }
    }
    for(int i=0;i<n-1;i++)
    cout<<arr[i]<<"+";
    cout<<arr[n-1];
    return 0;
}
