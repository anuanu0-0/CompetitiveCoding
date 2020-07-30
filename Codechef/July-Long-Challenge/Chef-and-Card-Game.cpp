
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

int sumDigits(int no)
 {
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
 }

int main()
{
  FAST
  test{
    int n;
    cin >> n;
    int res = 0;
    int A, B;
    int chef = 0, morty = 0;
    for(int i=0; i<n; i++) {
      cin >> A >> B;
      A = sumDigits(A);
      B = sumDigits(B);
      if(A>B) {
        chef++;
      }
      else if(B>A) {
        morty++;
      }
      else {
        morty++;
        chef++;
      }
    }
    if(chef > morty)
      cout << "0 " <<chef<<endl;
    else if( morty > chef)
        cout << "1 " <<morty<<endl;
    else
        cout << "2 " <<chef<<endl;

  }
  return 0;
}
