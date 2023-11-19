#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,a;
        cin>>n>>m;
        long long int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum += a;
        }
        if(sum == m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

