#include <bits/stdc++.h>
#define MOD 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define F first
#define S second

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
    FAST int n, t, count = 0;
    cin >> n >> t;
    char s[51];
    cin >> s;
    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        { 
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s << endl;

    return 0;
}
