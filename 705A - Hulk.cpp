#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<< "I hate";
    if(n>1)
    {
        cout<< " that ";
    for(int i=2;i<n;i++)
    {
        if(i%2==0)
        cout<<"I love";
        else cout<<"I hate";
        cout<<" that ";
    }
    if(n%2==0)
     cout<<"I love";
        else cout<<"I hate";
    
    }
    cout<<" it";

    return 0;
}
