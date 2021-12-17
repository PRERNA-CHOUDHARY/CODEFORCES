#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        int polygon;
        cin>>polygon;
        if(polygon%4==0)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
        n--;
    }
    return 0;
}
