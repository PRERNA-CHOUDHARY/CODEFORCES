#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
{ 
    int n,ways;
    cin>>n;
    if(n%2==0)
    ways=n/2-1;
    else 
    ways=n/2;
    cout<<ways<<"\n";
    t--;
}
}
