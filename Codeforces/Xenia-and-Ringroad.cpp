#include <bits/stdc++.h>
#define MOD 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define F first
#define S second
typedef long long LL;
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();
#define FILE_READ_IN freopen("input.txt", "r", stdin);
#define FILE_READ_OUT freopen("output.txt", "w", stdout);
#define all(a) a.begin(), a.end()
#define ld long double
using namespace std;

int main()
{
    FAST int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    LL ctime = 0;
    int pos = 1;
    for (int i = 0; i < m; i++)
    {
        if (v[i] >= pos)
            ctime += v[i] - pos;
        else
            ctime += n - pos + v[i];

        pos = v[i];
    }
    cout << ctime << endl;

    return 0;
}
