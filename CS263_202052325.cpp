#include <bits/stdc++.h>
using namespace std;

bool check(vector<pair<int, int>> &seg, int x, int n, int m)
{
    int curLocation = 1;
    multiset<int> S;
    int i = 0;
    while (curLocation < n)
    {
        // if L <= current location, include in cur set S
        while (i < m and seg[i].first <= curLocation)
        {
            S.insert(seg[i].second);
            i++;
        }
        int cur = curLocation;
        // check for any R such that we can move right
        while (cur == curLocation and !S.empty())
        {
            int R = *S.begin();
            S.erase(S.begin());
            curLocation = max(curLocation, min(R, curLocation + x));
        }
        // if we dont find any segment to move right
        // break it. because we can't finish now
        if (curLocation == cur)
            break;
    }
    return curLocation == n;
}

signed main()
{

    int n, m;
    cout << "Input length of segment" << endl;
    cin >> n;
    cout << "Input number of workers" << endl;
    cin >> m;
    vector<pair<int, int>> seg(m);

    for (int i = 0; i < m; i++)
    {
        cout << "Allot segments for worker number" << i + 1 << endl;
        cin >> seg[i].first >> seg[i].second;
    }

    sort(seg.begin(), seg.end());
    int ans = -1, s = 1, e = 1e9;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (check(seg, mid, n, m))
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }

    if (ans != -1)
    {
        cout << "Least time required in completion of task: " << ans << '\n';
    }
    else
    {
        cout << "Its not possible to clean whole area with this assigned inputs" << endl;
    }

    return 0;
}