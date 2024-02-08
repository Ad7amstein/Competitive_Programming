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
#define endl      '\n'
#define int       long long
#define ull       unsigned long long
#define double    long double
#define MAX       LLONG_MAX
#define MIN       LLONG_MIN
#define OO        1e9
#define PI        3.14159265358979323846
#define all(x)    x.begin(), x.end()
#define fr(n)     for(int i = 0 ; i < n ; i++)
#define rfr(n)    for(int i = n ; i >= 0 ; i--)
#define frj(n)    for(int j = 0 ; j < n ; j++)
#define rall(x)   x.rbegin(), x.rend()
#define fast      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define yes       cout << "YES" << endl
#define no        cout << "NO" << endl
#define RV(x)     return void(cout << x << endl)
// #define        lower_bound(n,v) lower_bound((v).begin(),(v).end(),(n))-(v).begin() // First number >= n
// #define        upper_bound(n,v) upper_bound((v).begin(),(v).end(),(n))-(v).begin()// First number > n
/**void FILES() {
#ifndef ONLINE_JUDGE
    freopen("Bumble.in", "r", stdin);
    freopen("Bumble.out", "w", stdout);
    freopen("Bumble.txt", "w", stderr);
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
//map<int, int>freq;
//bool exists[N];
vector<string>grid;
//vector<pair<int, int>> adj[N];
bool vis[30][30];

char di[] = { 'D', 'L', 'U', 'R' };
int dx[] = { 0, 1, -1, 0, -1, -1, 1, 1 };
int dy[] = { 1, 0, 0, -1, 1, -1, 1, -1 };
int n, m, cnt, ans, mx, mn;
string path = "IEHOVA#";
vector<string>ans_path;
//============================================================
bool valid(int i, int j) {
    return (i >= 0 && j >= 0 && i < n && j < m);
}
void dfs(int r, int c, int next) {
    if (grid[r][c] == '#') return;
    // go forth if valid
    if (valid(r - 1, c) && grid[r - 1][c] == path[next]) {
        ans_path.push_back("forth");
        dfs(r - 1, c, next + 1);
    }
    // go right if valid
    else if (valid(r, c + 1) && grid[r][c + 1] == path[next]) {
        ans_path.push_back("right");
        dfs(r, c + 1, next + 1);
    }
    // go left (MUST BE VALID)
    else { 
        ans_path.push_back("left");
        dfs(r, c - 1, next + 1); 
    }
}
//============================================================

void solve() {
    cin >> n >> m;
    grid = vector<string>(n); cin >> grid;
    ans_path.clear();
    int r = 0, c = 0;
    fr(n) {
        frj(m) {
            if (grid[i][j] == '@') {
                r = i, c = j;
                break;
            }
        }
    }
    dfs(r, c, 0);
    fr(ans_path.size()) cout << ans_path[i] << (i < ans_path.size() - 1 ? ' ' : '\n');
}

//============================================================
signed main()
{
    fast
        //FILES();
        int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// الْحَمْدُ لِلَّهِ الَّذِي هَدَانَا لِهَٰذَا وَمَا كُنَّا لِنَهْتَدِيَ لَوْلَا أَنْ هَدَانَا اللَّهُ//
// *__* __* __* __* __* __* __* __* __* __* __* __* __* __*
