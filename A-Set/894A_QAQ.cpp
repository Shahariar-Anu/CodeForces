#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define Pi 2*acos(0.0)

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s ;
    int ans=0,n;
    int i,j,k;
    cin>>s;
    n= s.size();
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            for(k=j+1;k<n;k++)
                if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
                    ans++;

   cout<<ans<<endl;
   return 0;

}
