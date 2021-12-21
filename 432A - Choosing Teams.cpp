#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int a[n];
    int m=5-k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=m)
        count++;
    }
    cout<<count/3;
    
}
