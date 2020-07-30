
#include <bits/stdc++.h>

#define MOD 1000000007
#define test \
  int t;     \
  cin >> t;  \
  while (t--)
#define init(arr, val) memset(arr, val, sizeof(arr))
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
#define FAST                        \
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
  test{
    ll n;
    cin >> n;

    ll prev, cur, res=0, diff= 0;
    cin >> prev;

    for(int i=1; i<n; i++) {
      cin >> cur;
      diff = max(prev, cur)-min(prev, cur);
      if(diff > 0)
        res = res + diff - 1;
      else
        res = res + diff;

      prev = cur;
    }
    cout<<res<<endl;
  }
  return 0;
}
