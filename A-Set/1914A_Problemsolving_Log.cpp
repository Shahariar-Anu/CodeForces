#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int count=0;
        vector<int>arr(27);
        for(int i=0; i<n; i++)
        {
            arr[s[i]-'A']++;
            if(arr[s[i]-'A'] == (s[i]-'A'+1))
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}



