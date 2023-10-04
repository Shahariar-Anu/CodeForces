#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        char x;
        x=n[n.length()-1];
        long long int xx=x-'0';
        x=n[0];
        long long int yy=x-'0';
        if(xx%2==0)
            cout<<"0\n";
        else if(yy%2==0)
            cout<<"1\n";
        else
        {
            bool okay=false;
            for(int i=0; i<n.length();i++)
            {
                xx=n[i]-'0';
                if(xx%2==0)
                {
                    okay=true;
                    break;
                }
            }
            if(okay)
                cout<<"2\n";
            else
                cout<<"-1\n";
        }

    }
}



