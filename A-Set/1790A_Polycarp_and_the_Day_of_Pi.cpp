#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        string str = "314159265358979323846264338327";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == str[i])
                count++;
            else
                break;
        }
        cout<<count<<"\n";
    }
    return 0;
}

