#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int flag=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='W' &&str[i+1]=='U' && str[i+2]=='B' )
        {
            i+=2;
            if(flag!=0)
            cout<<" ";
            
        }
        else
       { cout<<str[i];
           flag++;
       }
    }
    return 0;
}
