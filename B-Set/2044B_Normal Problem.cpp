#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    string s;
    while(t--)
    {
      cin>>s;
      for(int i = size(s)-1; i>=0; --i)
      {
        if(s[i]=='p')
          cout<<"q";
        else if(s[i]=='q')
          cout<<"p";
        else
          cout<<s[i];
      }
      cout<<"\n";
    }
    return 0;
}