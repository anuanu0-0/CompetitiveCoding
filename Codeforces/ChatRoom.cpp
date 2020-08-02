#include <bits/stdc++.h>

#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define init(arr, val) memset(arr, val, sizeof(arr))

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
#define endl '\n'
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
        string str = "",
               res = "";
    cin >> str;
    bool h = false, e = false, l1 = false, l2 = false, o = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'h' && !h)
        {
            h = true;
            res += 'h';
        }
        else if (str[i] == 'e' && h == true && !e)
        {
            e = true;
            res += 'e';
        }
        else if (str[i] == 'l' && e == true && !l1 && !l2)
        {
            l1 = true;
            res += 'l';
        }
        else if (str[i] == 'l' && l1 && !l2)
        {
            l2 = true;
            l1 = false;
            res += 'l';
        }
        else if (str[i] == 'o' && l2 == true && !o)
        {
            o = true;
            res += 'o';
        }
    }

    // cout << res << endl;

    if (res == "hello")
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

// ALT SOLUTION
/*

#include <iostream>
using namespace std;
int main() {
    string str, res="hello";
    int j = 0, pass = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == res[j] ) {
            j++;
            pas++
        }

        if (pass == 5)
            break;
    }

    if (pass == 5)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;    

}


*/