#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n==1)
        {
            cout<<"0\n";
            continue;
        }
        int ans=0;
        while(n>1)
        {
            if(n%2==0)
            {
                n/=2;
                ans++;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
                ans++;
            }
            else if(n%5==0)
            {
                n=(4*n)/5;
                ans++;
            }
            else if((n%2 != 0 && n%3 !=0) && (n%5)!=0)
            {
                if(n!=1)
                {
                    cout<<"-1\n";
                    break;
                }
            }
            if(n==1)
            {
                cout<<ans<<"\n";
                break;
            }
        }
    }
    return 0;
}

