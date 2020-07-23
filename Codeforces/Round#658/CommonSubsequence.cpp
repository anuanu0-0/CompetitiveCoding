
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second

	using namespace std;
	int main()
	{
    int t;
    cin>>t;
    while(t--) {
      int n,m;
      cin>>n>>m;
      vector<int> a(n);
      vector<int> b(m);
      unordered_set<int> us1;
      bool flag = false;
      int rep;

      for(int i=0; i<n; i++) {
        cin>>a[i];
      }
      for(int i=0; i<m; i++) {
        cin>>b[i];
      }
      unordered_map<int, int> umap;
      for(int i=0; i<n; i++) {
        umap[a[i]] = 1;
      }
      for(int i=0; i<m; i++) {
        if(umap[b[i]] == 1) {
          rep = b[i];
          flag = true;
          break;
        }
      }

      if(flag) {
        cout << "YES" <<endl<<"1 "<<rep<<endl;
      }
      else {
        cout << "NO"<<endl;
      }
    }
    	return 0;
	}
