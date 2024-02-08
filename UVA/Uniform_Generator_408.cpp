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

//int ndivs[N], vis[N], spf[N];
vector<int>primes;
map<int, int>freq;

int n, m, cnt, ans, mx, mn;
bool vis[N];

//============================================================

//============================================================

void solve() {
    while (cin >> n >> m) {
        memset(vis, 0, sizeof(vis));
        int num = 0;
        bool bad = false;
        for (int i = 0; i < m; ++i) {
            num = (num + n) % m;
            if (vis[num]) { // Bad
                bad = true;
                break;
            }
            vis[num] = 1;
        }
        if (bad) {
            cout << setw(10) << n
                << setw(10) << m;
            cout << "    " << "Bad Choice\n\n";
        }
        else {
            cout << setw(10) << n
                << setw(10) << m;
            cout << "    " << "Good Choice\n\n";
        }
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
