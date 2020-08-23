
	#include <bits/stdc++.h>

	#define endl "\n"
	using namespace std;
	int main()
	{
		std::ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--) {
      int n, m;
      cin >> n >> m;
      cin.ignore();
      string arr [] ={"Akshat" ,"Malvika"} ;
      if(min(n, m) % 2 == 0)
        cout << arr[1] << endl;
      else
          cout << arr[0] << endl;
    }
return 0;
	}
