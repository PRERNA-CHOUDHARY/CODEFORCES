#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,Mishka=0,Chris=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
            Mishka++;
        else if(b>a)
           Chris++;
    }
    if(Mishka>Chris)
    cout<<"Mishka";
    else if(Mishka<Chris)
    cout<<"Chris";
    else cout<<"Friendship is magic!^^";

    return 0;
}
