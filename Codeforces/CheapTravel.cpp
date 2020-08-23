
#include <bits/stdc++.h>

#define endl "\n"
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    cin.ignore();
    int cost = 0;
    if(m*a <= b)
      cost = n*a;
    else {
      cost = (n/m)*b + min((n%m)*a,b);
    }
    cout << cost << endl;
return 0;
}
