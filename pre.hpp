#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
// #include <atcoder/modint>
// #include <atcoder/fenwicktree>
// #include <atcoder/segtree>
// #include <atcoder/scc>

#define int long long
#define all(x) begin(x), end(x)

using namespace std;
// using namespace atcoder;
// using mint = modint998244353;
// using mint = modint1000000007;
using ld = long double;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vp = vector<pii>
using vvp = vector<vp>;
using vs = vector<string>;
using vvc = vector<vector<char>>;

void debug(vector<int> a) {
    for (auto x : a) cout << x << ' ';
    cout << endl;
}

void debug(vector<vector<int>> a) {
    for (auto y : a) debug(y);
}

template <typename T1, typename T2>
inline bool chmax(T1 &a, T2 b) {return a < b and (a = b, true);}

template <typename T1, typename T2>
inline bool chmin(T1 &a, T2 b) {return a > b and (a = b, true);}

const int supl = LONG_LONG_MAX - 100;

void main_() {
}

signed main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    main_();

    return 0;
}
