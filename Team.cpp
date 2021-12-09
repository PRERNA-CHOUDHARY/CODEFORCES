#include<bits/stdc++.h>
using namespace std;

int main()
{ int t;
int c=0;
cin>>t;
    while(t>0)
    
   {
    int x,y,z;
    cin>>x>>y>>z;
    if((x==1&&y==1) ||(x==1 &&z==1)|| (y==1 && z==1)|| (x==1 && y==1 && z==1))
    c++;
    t--;
   }
   cout<<c;
    return 0;
}
