#include <iostream>
#include <unordered_set>
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

void solve(int n)
{
    if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0 || n % 744 == 0 || n % 747 == 0 || n % 777 == 0)
        cout << "YES";

    else
        cout << "NO";
}

int main()
{
    FAST int n;
    cin >> n;
    solve(n);
    return 0;
}

// LUCKY NUMBERS: 4, 7,44, 47, 74, 77, 444, , , , ,