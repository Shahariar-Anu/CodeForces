#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x,one=0,two=0,a1=0,a2=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x%2==0)
                two++;
            else
                one++;
        }
        if(two%2==1)
            a1+=2;
        if(a1==0)
            if(one%2==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        else
        {
            if(one>=2)
                if((one-2)%2==0)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            else
                cout<<"NO\n";
        }

    }
    return 0;
}

