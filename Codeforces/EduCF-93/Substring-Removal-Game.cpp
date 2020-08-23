
	#include <bits/stdc++.h>

	#define endl "\n"
	using namespace std;
	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			string s;
      cin >> s;
			vector<int> a;
      int res = 0;
      for (size_t i = 0; i < s.length(); i++) {
        int count = 0;
        while(i<s.length() && s[i] == '1') {
          count++;
          i++;
        }
        a.push_back(count);
      }

      sort(a.rbegin(), a.rend());
      for(int i=0; i<a.size(); i++) {
        if(i%2 == 0)
          res += a[i];

        if(a[i] == 0)
            break;
      }
      cout << res <<endl;
		}
		return 0;
	}
