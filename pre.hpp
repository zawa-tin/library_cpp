#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
// #include <atcoder/modint>
// #include <atcoder/fenwicktree>
// #include <atcoder/segtree>

#define int long long
#define all(x) begin(x), end(x)

using namespace std;
// using namespace atcoder;
// using mint = modint998244353;
// using mint = modint1000000007;
using ld = long double;
using pii = pair<int, int>;

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

inline int ceildiv(int a, int b) {return (a + b - 1) / b;}

inline int p2(int a) {return a*a;}
inline ld p2(ld a) {return a*a;} 

// inline bool in(int y, int x) {return 0 <= x and x < w and 0 <= y and y < h;}

const ll supl = 1e18 / 2 - 10000000000;

void main_() {
}

signed main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    main_();

    return 0;
}
