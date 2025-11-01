#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        string n = s.substr(0, s.size()-2);
        cout<< n + "i"<<"\n";
    }
    return 0;
}
