//  Time Complexity : 0(nlogn) Using sorting & 0(n) solution (Without sorting, at last)
#include <bits/stdc++.h>

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
    FAST
        string str = "";
    cin >> str;
    int n = str.length();
    sort(str.begin(), str.end());
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '+')
        {
            cout << str[i];
        }
        if (i != n - 1 && str[i] != '+')
        {
            cout << "+";
        }
    }

    return 0;
}

// 0(n) Solution
/*
int c1 = 0, c2 = 0, c3 = 0;
for(int i=0; i<str.length(); i++) {
    if(str[i] == '1')
        c1++;
    else if (str[i] == '2')
        c2++;
    else if(str[i] == '3)
        c3++;
}
while(c1+c2+c3 > 0) {
    if(c1 > 0) {
        cout<<"1";
        c1--;
    }
    else if(c2 >0) {
        cout << "2";
        c2--;        
    }
    else {
        cout << "3";
        c3--;
    }
    if(c3!=0) 
        cout<<"+";
    
}
*/