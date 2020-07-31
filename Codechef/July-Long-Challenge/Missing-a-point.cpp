
#include <bits/stdc++.h>

#define MOD 1000000007
#define test \
  int t;     \
  cin >> t;  \
  while (t--)
#define endl '\n'
#define init(arr, val) memset(arr, val, sizeof(arr))
#define ull unsigned long long int
#define ll long long int
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
    int n;
    cin >> n;
    int limit = 4*n-1, r = 0, c = 0, x=0, y=0;
    for(int i=0; i<limit; i++) {
      cin >> r >> c;
      x = x^r;
      y = y^c;
    }



    cout << x <<" "<< y << endl;
  }
  return 0;
}
