
#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main()
{
  {
      ios::sync_with_stdio(false);
      int x1, y1, x2, y2;
      cin >> x1 >> y1 >> x2 >> y2;
      int dis = sqrt(pow((x2-x1),2) + pow((y2-y1), 2));

      if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
          cout << -1 << endl;
      else if (x1 == x2)
          cout << x1 + dis << " " << y1 << " " << x2 + dis << " " << y2 << endl;
      else if (y1 == y2)
          cout << x1 << " " << y1 + dis << " " << x2 << " " << y2 + dis << endl;
      else
          cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
      return 0;
  }
return 0;
}
