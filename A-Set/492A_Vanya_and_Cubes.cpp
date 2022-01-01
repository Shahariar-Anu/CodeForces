#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int sum=0,count=0,cube=0;
    for(int i=1;;i++)
    {
        sum=sum+i;
        cube=sum+cube;
        if(cube>n)
            break;
        count++;
    }
    cout<<count;
    return 0;
}
