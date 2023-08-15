#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        count=2;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
                count++;
            else
                count+=2;
        }
        cout<<count<<"\n";
    }
    return 0;
}


