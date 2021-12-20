#include <bits/stdc++.h>
using namespace std;

int main() {

int k,r,flag=0;
cin>>k>>r;
for(int i=1;i<=10;i++)
{
    if(((i*k) % 10==r )|| ((i*k) % 10==0))
    {
        cout<<i;
        flag++;
        break;
    }
}
if(flag==0)
cout<<"0\n";
	return 0;
}
