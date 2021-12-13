#include <bits/stdc++.h>
using namespace std;

int main()
{
 int x;
 cin>>x;
 float sum=0;
 float arr[x];
 float m=x;
 for(int i=0;i<x;i++)
 {
     cin>>arr[i];
     sum+=arr[i];
     
     
 }
// cout<<sum;
cout<<fixed<< setprecision(14)<<sum/m;

  
    return 0;
}
