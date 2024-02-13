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
//#define double long double
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
bool valid(double a, double b, double x1, double y1, double x2, double y2)
{
    return (a < x1 && a > x2 && b > y1 && b < y2);
}
//============================================================

void solve()
{
    char c;
    vector<vector<double>> v;
    double a, b;
    double x2, y2, x1, y1;

    while (cin >> c)
    {
        if (c == '*')
            break;
        cin >> x2 >> y2 >> x1 >> y1;
        v.push_back({x2, y2, x1, y1});
    }
    cnt = 0;
    while (cin >> a >> b)
    {
        if (a == 9999.9 && b == 9999.9)
            break;
        cnt++;
        bool any = false;
        fr(v.size())
        {
            if (valid(a, b, v[i][2], v[i][3], v[i][0], v[i][1]))
            {
                cout << "Point " << cnt << " is contained in figure " << i + 1 << endl;
                any = true;
            }
        }
        if (!any)
        {
            cout << "Point " << cnt << " is not contained in any figure" << endl;
        }
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// الْحَمْدُ لِلَّهِ الَّذِي هَدَانَا لِهَٰذَا وَمَا كُنَّا لِنَهْتَدِيَ لَوْلَا أَنْ هَدَانَا اللَّهُ//
// *__* __* __* __* __* __* __* __* __* __* __* __* __* __*
