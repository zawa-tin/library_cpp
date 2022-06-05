#include <vector>
using namespace std;

vector<pair<int, int>> factorize (long long x) {
    vector<pair<int, int>> res;
    for (int i = 2 ; i * i <= x ; i++) if (x % i == 0) {
        res.emplace_back(i, 0);
        while (x % i == 0) {
            res.back().second++;
            x /= i;
        }
    }

    if (x != 1) res.emplace_back(x, 1);

    return res;
}
