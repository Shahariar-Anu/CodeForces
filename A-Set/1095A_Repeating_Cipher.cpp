#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++)
        cin>>s[i];

    vector<char>ans;

    int place = 0;
    for(int i=0; place<n; i++)
    {
        place=place+i;
        ans.push_back(s[place-1]);
    }
    for(int i=1; i<ans.size(); i++)
        cout<<ans[i];
    return 0;
}



