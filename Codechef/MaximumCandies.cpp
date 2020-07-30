
#include <bits/stdc++.h>
#include<algorithm>
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
#define endl '\n'
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
    int t;
    cin>>t;
    while(t--){
      int n, m, x, y, res;
      cin>>n>>m>>x>>y;
      int mat = n*m;
    //   int l, h = max(x,y-x);
      
    //   if(mat == 1){
    //       if(y<x)
    //         res = y;
    //       else
    //         res = max(x, y-x);
    //         cout << res <<endl;
    //         continue;
    //   }
      
    //   if(h == y-x)
    //     l = max(x, 0);
    //   else
    //     l = max(y-x, 0);
       
    //   if(mat % 2 == 0) {
    //     res = x*(mat/2) + l*(mat/2);
    //   }
    //   else {
    //     res = h*((mat+1)/2) + l*((mat-1)/2);


        int h,l = max(y-x, 0);
        if(y<x)
            h = max(y-x, x);
        else
            h = y;   
            
             
        if(mat % 2 == 0)
            res = (x+l)*(mat/2);
        else
            res =  h*ceil(mat/2) + l*floor(mat/2);   


      }
      cout << res <<endl;
    }
    return 0;
}
