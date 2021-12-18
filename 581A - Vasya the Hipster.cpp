#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m)
    cout<<m<<" ";
    else 
    cout<<n<<" ";
    cout<<abs(n-m)/2;
}
