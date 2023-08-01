#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num == 0)
                count++;
            else
            {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        maxCount=max(maxCount, count);
        cout<<maxCount<<"\n";
    }

    return 0;
}
