#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sumx=0,sumy=0,sumz=0;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    // cout<<sumx<<" "<<sumy<<" "<<sumz<<"\n";
    if(sumx!=0  || sumy!=0 || sumz!=0)
    cout<<"NO";
    else
    cout<<"YES";
    

    return 0;
}
