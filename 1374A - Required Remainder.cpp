#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n,num=0;
        cin>>x>>y>>n;
        num=(n/x)*x+y;
        if(num<=n)
        cout<<num<<"\n";
        else
        
        cout<<num-x<<"\n";
        
    }

    return 0;
}
