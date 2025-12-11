#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >>n>>k;
    map<int, int> ratingMap;
    for (int i = 0; i < n; i++)
    {
        int rating;
        cin >> rating;
        if (ratingMap.find(rating) == ratingMap.end())
        {
            ratingMap[rating] = i + 1;
        }
    }

    if (ratingMap.size() < k)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        int count = 0;

        for (map<int, int>::iterator it = ratingMap.begin(); count < k; ++it, ++count)
            cout << it->second << " ";
    }

    return 0;
}
