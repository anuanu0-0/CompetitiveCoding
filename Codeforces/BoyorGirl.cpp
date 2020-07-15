//  Time Complexity: 0(n)
//  Auxilary Space: 0(distinct elements) ~ O(n)

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

void solve(string &str)
{
    unordered_set<int> us;
    for (int i = 0; i < str.length(); i++)
    {
        us.insert(str[i]);
    }
    if (us.size() % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER";
}

int main()
{
    string str = "";
    cin >> str;
    solve(str);
    return 0;
}
