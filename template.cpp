///----------------------------Template-----------------------///

#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define prev asfansjfansjabfasjlbfa
#define se second
#define I "%d"
#define II "%d%d"
#define III "%d%d%d"
#define elif else if
#define out_files(name) freopen(name".in","r",stdin); freopen(name".out","w",stdout);
#define all(x) (x).begin(), (x).end()
#define len(x) int((x).size())
#define fast ios_base::sync_with_stdio(0)
#define y1 asnflainflawnfaw
#define y0 snalfklawnfasdaspqw
#define next asfnlafnaldnffa

using namespace std;

typedef vector <int> vi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair <int, int> pii;
typedef vector <pii> vii;
typedef long double ld;

#ifdef WIN32
    #define I64 "%I64d"
#else
    #define I64 "%lld"
#endif // WIN32

const int inf = 1000000000;
const ll INF = 1LL*inf*inf;
const double eps = 1e-9;
const int md = (int)1e9 + 7;
const double EPS = 1e-7;
const ll maxll = numeric_limits<ll>::max();
const ld M_PI = acos(-1.0);

template <typename name> inline name sqr(name x)
{
    return x * x;
}

inline ll multmod(ll a, ll b, ll md)
{
    if (!a) return 0;
    if (a % 2 == 1)
        return (multmod(a - 1, b, md) + b) % md;
    else
        return sqr<ll>(multmod(a / 2, b, md)) % md;
}

template <typename name> inline name bpow(name base, ll exp, ll md = maxll)
{
    if (exp == 0) return 1;
    if (exp % 2 == 1)
        return (base * bpow(base, exp - 1, md)) % md;
    else
    {
        name k = bpow(base, exp / 2, md);
        return (k * k) % md;
    }
}

///-------------------------End of Template-------------------------///

int n, b, d, x, ans, cur, a[3000000];

main()
{
    scanf(II, &n, &x);
    for (int i=0; i<n; i++)
        scanf(I, &a[i]);
    sort(a, a+n);
    if (n == 1) return cout << 0, 0;
    if (x < a[0])
        return cout << a[n-2] - x, 0;
    if (x > a[n-1]) return cout << x - a[1], 0;
    ans = a[n-1] - x + a[n-1] - a[1];
    if (x <= a[n-2]) ans = min(ans, a[n-2] - x + a[n-2] - a[0]);
    else ans = min(ans, x - a[0]);
    ans = min(ans, x - a[0] + a[n-2] - a[0]);
    if (x >= a[1]) ans = min(ans, x - a[1] + a[n-1] - a[1]);
    else ans = min(ans, a[n-1] - x);
    cout << ans;
    return 0;
}
