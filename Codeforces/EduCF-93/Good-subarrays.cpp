
	#include <bits/stdc++.h>

	#define endl "\n"
	using namespace std;
	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		 cin.ignore();
		while(T--)
		{
			   int n, sum = 0;
         cin >> n;
         char arr[n+1];
         for(int i=0; i<n; i++) {
           cin >> arr[i];
         }
         for(int i=0; i<n; i++) {
           sum += (int)arr[i];
         }
         cout << sum << " ";
         // cout << countGoodSubs(arr, 0, n, sum);
		}
		return 0;
	}
