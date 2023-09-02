#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,s;
        cin>>n>>s;
        n=n*n;
        cout<<s/n<<"\n";
    }
    return 0;
}
