#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string a,b;
    cin>>a>>b;
    for(int i=0; i<a.size(); i++)
    {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    if(a==b)
        cout<<"0";
    else
    {
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]<b[i])
            {
                cout<<"-1";
                return 0;
            }
            if(a[i]>b[i])
            {
                cout<<"1";
                return 0;
            }
        }
    }
    return 0;
}
