
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
			int n;
			cin >> n;
			if(n<3) {
				cout << -1 << endl;
				continue;
			}
			vector<int> a(n+1);
			for(int i=0; i<n; i++) {
				cin >> a[i];
			}
			if(a[0] + a[1] <= a[n-1])
				cout <<"1 2 "<<n << endl;
			else
				cout << -1 << endl;
		}
		return 0;
	}
