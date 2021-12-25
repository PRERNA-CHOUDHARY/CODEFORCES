#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,min,max;
        cin>>a>>b;
        if(a>=b)
            {min=b;
            max=a;}
        else
           { min=a;
            max=b;}
        if((2*min)>=max)
        cout<<pow(2*min,2)<<"\n";
        else cout<<pow(max,2)<<"\n";
        
        
    }

    return 0;
}
