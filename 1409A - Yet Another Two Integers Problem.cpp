#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--)
{
    int b,a;
    cin>>b>>a;
    int c= abs(b-a);
    if(c==0)
    cout<<"0\n";
    else
    if(c%10==0)
    cout<<((c/10))<<"\n";
    else
    cout<<((c/10)+1)<<"\n";
    
}
	return 0;
}
