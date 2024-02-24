/**
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
// #define   lower_bound(n,v) lower_bound((v).begin(),(v).end(),(n))-(v).begin() // First number >= n
// #define   upper_bound(n,v) upper_bound((v).begin(),(v).end(),(n))-(v).begin()// First number > n
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
        os << x << ' ';
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
const int mod = 1e9 + 7, N = 2e6 + 5;

int ndivs[N], spf[N], fac[N], modinv[N];
vector<int> primes, v;
// vector<vector<int>> adj;
bool vis[N];
char di[] = {'D', 'L', 'U', 'R'};
int dx[] = {0, 1, -1, 0, -1, -1, 1, 1};
int dy[] = {1, 0, 0, -1, 1, -1, 1, -1};
int n, m, cnt, ans, mx, mn;
//============================================================
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}
int rec(int i, int cnt, int div)
{
    if (i == m)
    {
        if (cnt == 0)
            return 0;
        if (cnt % 2 == 0)
            return -(n / div);
        else
            return (n / div);
    }
    return rec(i + 1, cnt + 1, lcm(div, v[i])) + rec(i + 1, cnt, div);
}
//============================================================
void solve()
{
    while (cin >> n >> m)
    {
        v = vector<int>(m);
        cin >> v;
        cout << n - rec(0, 0, 1) << endl;
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
    //  cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// الْحَمْدُ لِلَّهِ الَّذِي هَدَانَا لِهَٰذَا وَمَا كُنَّا لِنَهْتَدِيَ لَوْلَا أَنْ هَدَانَا اللَّهُ//
// *__* __* __* __* __* __* __* __* __* __* __* __* __* __*
