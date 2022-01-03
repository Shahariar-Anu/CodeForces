#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n,i,j,k;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
    {
        k=0,j=0;
        while(k!=arr[i])
        {
            j++;
            if(j%3!=0 && j%10!=3)
                k++;
        }
    }
    cout<<j<<"\n";
	return 0;
}
