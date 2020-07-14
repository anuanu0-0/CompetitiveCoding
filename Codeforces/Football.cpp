//  Time Complexity: 0(n)
//  Auxilary Space: 0(1)

//Another Simple solution  0(1) (Using fin)
#include <bits/stdc++.h>

#define MOD 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define init(arr, val) memset(arr, val, sizeof(arr))
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loopr(i, a, b) for (int i = a; i >= b; i--)
#define loops(i, a, b, step) for (int i = a; i < b; i += step)
#define looprs(i, a, b, step) for (int i = a; i >= b; i -= step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
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
    string str = "";
    cin >> str;
    int count1 = 0, count0 = 0;
    bool flag = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            count1++;
            count0 = 0;
        }
        else
        {
            count0++;
            count1 = 0;
        }
        if (count0 == 7 || count1 == 7)
            flag = true;
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

string str = "1000000001";
string str1 = "0000000";
string str2 = "1111111";

// Find first occurrence of "geeks"
int found1 = str.find(str1);
int found2 = str.find(str2);

cout << found1 << endl
     << found2;
