#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,len,mid;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        len=s.size();
        mid=len/2;
        int count=0;
        if(len%2 != 0)
            cout<<"NO\n";
        else
        {
            for(int i=0; i<mid; i++)
            {
                if(s[i]==s[mid+i])
                    count++;
                else
                    break;
            }
            if(count==mid)
                cout<<"YES\n";
            else
                cout<<"NO\n";

        }
    }
    return 0;
}
