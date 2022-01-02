#include<bits/stdc++.h>
using namespace std;
 
int main()
{ int t;
cin>>t;
    while(t>0)
    
   {
    string str;
    cin>>str;
    int c=0;
    int x= str.length();
    for(int i=0;i<x;i++)
    c++;
    if(c>10)
    cout<<str[0]<<c-2<<str[x-1]<<"\n";
    else
    cout<<str<<"\n";
   
    t--;
   }
    return 0;
}
