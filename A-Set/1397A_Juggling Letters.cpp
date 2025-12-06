#include <bits/stdc++.h>
#include <math.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int>a(26);
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<(int)s.size();j++)
        {
            int k=s[j]-(int)'a';
            a[k]++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]%n!=0)
        {
            cout<<"NO"<<"\n";
            return;
        }
    }
        cout<<"YES"<<"\n";
        return;
    }
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
        solve();
    return 0;
    }
