#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string a,b;
    cin>>a>>b;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==b[i])
            cout<<"0";
        else
            cout<<"1";
    }
    return 0;
}
