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
    ll t;
    cin >> t;
    while(t--) {
      ll tcap, cap1, cap2, cn1, cn2, s, w, res=0;
      cin >>cap1>>cap2>>cn1>>cn2>>s>>w;
      tcap = cap1 + cap2;


      // MIN & max
      if(s>w) {
        swap(s, w);
        swap(cn1, cn2);
      }


      if(tcap/s >= cn1) {
        res += cn1;
        tcap = tcap-s*cn1;
        //  Now check for axex
        if(tcap/w >= cn2) {
          res += cn2;
        }
        else {
          res += tcap/cn2;
        }
      }
      else {
        // Don't need to check for axes
        res += tcap/w;
      }


      cout << res << '\n';
    }


    return 0;
}
