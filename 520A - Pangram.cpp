#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int arr[26]={0};
    int flag=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=97 && str[i]<=122 )
        arr[(int)str[i]-97]=1;
        else if(str[i]>=65 && str[i]<=90)
        arr[(int)str[i]-65]=1;
        
    }       
    for(int i=0;i<26;i++)
    {
       
        if(arr[i]==0)
        {
            flag++;
            break;
        }
        }
    if(flag==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
