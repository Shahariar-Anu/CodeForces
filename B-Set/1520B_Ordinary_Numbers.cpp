#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
	cin>>t;
    while(t--)
	{
    	long long n, count=0, start;
    	cin >> n;
    	for(int i=1; i<=9; i++)
    	{
    		start=i;
    		while(start<=n)
    		{
    			count++;
    			start=start*10+i;
			}
		}
		cout << count << endl;
    }
    return 0;
}
