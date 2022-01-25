#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int arr[4];
    int c=4;
    for(int i=0;i<4;i++)    //1 2 3
    {
        cin>>arr[i];  
        
    }
for(int i=0;i<4;i++)
{
    int k=0;
    for(int j=i+1;j<4;j++)
    {
        if(arr[i]==arr[j])
        {
            k++;
            break;
        }
    }
    if(k==0)
    c--;
    
}
    cout<<c;

    return 0;
}
