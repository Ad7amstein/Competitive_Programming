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
#include <bits/stdc++.h>
using namespace std;
//============================================================
#define endl '\n'
#define int long long
#define ull unsigned long long
// #define double long double
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define OO 1e9
#define PI 3.14159265358979323846
#define all(x) x.begin(), x.end()
#define fr(n) for (int i = 0; i < n; i++)
#define rfr(n) for (int i = n; i >= 0; i--)
#define frj(n) for (int j = 0; j < n; j++)
#define rall(x) x.rbegin(), x.rend()
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define RV(x) return void(cout << x << endl)
// #define        lower_bound(n,v) lower_bound((v).begin(),(v).end(),(n))-(v).begin() // First number >= n
// #define        upper_bound(n,v) upper_bound((v).begin(),(v).end(),(n))-(v).begin()// First number > n
#define files                         \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

//============================================================
// overload (>>) cin for vector
template <class T>
istream &operator>>(istream &is, vector<T> &v)
{
    for (auto &x : v)
    {
        is >> x;
    }
    return is;
}
// overload (>>) cin for deque
template <class T>
istream &operator>>(istream &is, deque<T> &v)
{
    for (auto &x : v)
    {
        is >> x;
    }
    return is;
}
// overload (<<) cout for vector
template <class T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (auto &x : v)
    {
        os << x << endl;
    }
    return os;
}
// overload (<<) cout for deque
template <class T>
ostream &operator<<(ostream &os, const deque<T> &v)
{
    for (auto &x : v)
    {
        os << x << ' ';
    }
    return os;
}
//============================================================
const int mod = 1e9 + 7, N = 1e5 + 7;

// int ndivs[N], spf[N];
vector<int> primes;
vector<vector<int>> adj;
bool vis[N];
char di[] = {'D', 'L', 'U', 'R'};
int dx[] = {0, 1, -1, 0, -1, -1, 1, 1};
int dy[] = {1, 0, 0, -1, 1, -1, 1, -1};
int n, m, cnt, ans, mx, mn;
//============================================================
//============================================================
void solve()
{
    cin >> n;
    fr(n){
        if (i > 0) cout << endl;
        int x11, y11, x12, y12;
        cin >> x11 >> y11 >> x12 >> y12;
        int x21, y21, x22, y22;
        cin >> x21 >> y21 >> x22 >> y22;
        int x31 = max(x11, x21), y31 = max(y11, y21),
            x32 = min(x12, x22), y32 = min(y12, y22);
        int area = max(0ll, x32 - x31) * max(0ll, y32 - y31);
        if (area <= 0)
            cout << "No Overlap" << endl;
        else
            cout << x31 << ' ' << y31 << ' ' << x32 << ' ' << y32 << endl;
    }
}

//============================================================
signed main()
{
    fast
#ifndef ONLINE_JUDGE
        files
#endif
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
