#include <vector>

vector<int> sieve(int n) {
    vector<int> res(n + 1, 1);
    res[0] = res[1] = 0;
    for (int i = 0 ; i <= n ; i++) if (res[i]) {
        for (int j = i + i ; j <= n ; j += i) res[j] = 0;
    }

    return res;
}
