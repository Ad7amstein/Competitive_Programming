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
const int mod = 1e9 + 7, N = 1e5 + 7;

int ndivs[N], spf[N];
vector<int> primes;
vector<vector<int>> adj;
bool vis[N];
char di[] = {'D', 'L', 'U', 'R'};
int dx[] = {0, 1, -1, 0, -1, -1, 1, 1};
int dy[] = {1, 0, 0, -1, 1, -1, 1, -1};
int n, m, cnt, ans, mx, mn;
//============================================================
int odd_factors(int n)
{
    int of = 1;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            n /= i;
            if (i % 2)
                of *= i;
        }
    }
    if (n > 1 && n % 2)
    {
        of *= n;
    }
    return of;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
//============================================================
void solve()
{
    cin >> n;
    vector<int> v(n);
    cin >> v;
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1, mid = (l + r) / 2, ans1 = 0, ans2 = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] >= x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
                ans1 = v[mid];
            }
        }
        int idx = upper_bound(all(v), x) - v.begin();
        if (idx < n)
            ans2 = v[idx];
        if (ans1) cout << ans1 << ' ';
        else cout << 'X' << ' ';
        if (ans2) cout << ans2 << endl;
        else cout << 'X' << endl;
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
