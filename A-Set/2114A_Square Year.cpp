#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int year;
        cin>>year;
        int root = sqrt(year);
        if(root*root == year)
            cout<<0<<" "<<root<<"\n";
        else
            cout<<-1<<"\n";
    }
}
