/*
          #
         ###
        ## ##
       ##   ##
      ##3llam##
     ##       ##
    ##         ##
   ##           ##
بسم الله الذي لا يضر مع اسمه شيء في الأرض ولا في السماء وهو السميع العليم.
*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*
*/

// #include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <list>
#include <numeric>
#include <utility>
#include <unordered_set>
#include <climits>
#include <cstring>
using namespace std;
//============================================================
#define endl '\n'
#define int long long
#define ull unsigned long long
#define double long double
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define PI 3.14159265358979323846
#define all(x) x.begin(), x.end()
#define fr(n) for(int i = 0 ; i < n ; i++)
#define rfr(n) for(int i = n ; i >= 0 ; i--)
#define frj(n) for(int j = 0 ; j < n ; j++)
#define rall(x) x.rbegin(), x.rend()
// #define lower_bound(n,v) lower_bound((v).begin(),(v).end(),(n))-(v).begin() // First number >= n
// #define upper_bound(n,v) upper_bound((v).begin(),(v).end(),(n))-(v).begin()// First number > n
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define RV(x) return void(cout << x << endl)
/*void FILES() {
#ifndef ONLINE_JUDGE
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}*/

//============================================================
// overload (>>) cin for vector
template<class T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& x : v) {
        is >> x;
    }
    return is;
}
// overload (>>) cin for 2d vector
template<class T>
istream& operator>>(istream& is, vector<vector<T>>& v) {
    for (auto& x : v) {
        for (auto& y : x) {
            is >> y;
        }
    }
    return is;
}
// overload (>>) cin for deque
template<class T>
istream& operator>>(istream& is, deque<T>& v) {
    for (auto& x : v) {
        is >> x;
    }
    return is;
}
// overload (<<) cout for vector
template<class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    for (auto& x : v) {
        os << x << ' ';
    }
    return os;
}
// overload (<<) cout for deque
template<class T>
ostream& operator<<(ostream& os, const deque<T>& v) {
    for (auto& x : v) {
        os << x << ' ';
    }
    return os;
}
//============================================================
const int mod = 1e9 + 7, N = 1e5 + 7;

int ndivs[N], vis[N], spf[N];
vector<int>primes;
map<int, int>freq;
//bool exists[N];
//vector<vector<char>>grid;
//vector<pair<int, int>> adj[N];

char di[] = { 'D', 'L', 'U', 'R' };
int dx[] = { 0, 1, -1, 0, -1, -1, 1, 1 };
int dy[] = { 1, 0, 0, -1, 1, -1, 1, -1 };
int n, m, cnt, ans, mx, mn;

//============================================================

deque<int> multiply_big(string s1, string s2) {
    reverse(all(s1)), reverse(all(s2));
    int n1 = s1.length(), n2 = s2.length();
    deque<int> ansd(1000);
    fr(n2) {
        frj(n1) {
            int p = (s1[j] - '0') * (s2[i] - '0');
            int idx = j + i;
            int div = p % 10, rem = p / 10;
            int m = idx;
            int sum = 0;
            do
            {
                sum = div + ansd[m];
                ansd[m] = sum % 10;
                div = sum / 10;
                m++;

            } while (sum > 9);
            m = idx + 1;
            do
            {
                sum = rem + ansd[m];
                ansd[m] = sum % 10;
                rem = sum / 10;
                m++;
            } while (sum > 9);
        }
    }
    return ansd;
}

//============================================================

void solve() {
    int c;
    while (cin >> n >> m >> c && n != 0) {
        ans = 0;
        for (int i = n; i >= 8; --i) {
            if (c == 0) {
                ans += (m - 8 + 1) / 2;
            }
            else {
                ans += ceil((m - 8 + 1) / 2.);
            }
            c = (c == 0 ? 1 : 0);
        }
        cout << ans << endl;
    }
}

//============================================================
signed main()
{
    fast
        //FILES();
        int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// الْحَمْدُ لِلَّهِ الَّذِي هَدَانَا لِهَٰذَا وَمَا كُنَّا لِنَهْتَدِيَ لَوْلَا أَنْ هَدَانَا اللَّهُ//
// *__* __* __* __* __* __* __* __* __* __* __* __* __* __*
