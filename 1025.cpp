
#include <iostream>
#include <vector>
#include <algorithm>
#define FOR(i, n) for (int i = 0; i < n; i++)
using namespace std;

void Display(vector<int> &arr)
{
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << endl;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, q, counter = 1;
    cin >> n >> q;

    while (n || q)
    {
        int m, query;
        vector<int> marbels;
        FOR(i, n)
        {
            cin >> m;
            marbels.push_back(m);
        }
        sort(marbels.begin(), marbels.end());

        cout << "CASE# " << counter << ":" << endl;
        FOR(i, q)
        {
            cin >> query;
            if (binary_search(marbels.begin(), marbels.end(), query))
            {
                int pos = lower_bound(marbels.begin(), marbels.end(), query) - marbels.begin();
                cout << query << " found at " << pos + 1 << endl;
            }
            else
            {
                cout << query << " not found" << endl;
            }
        }

        counter++;

        cin >> n >> q;
    }
}
