#include <vector>
#include <algorithm>
#include <climits>

int calcLis(const vector<long long>& as) {
    const long long sup = LONG_LONG_MAX - 100;
    vector<long long> dp(as.size(), sup);
    for (auto a : as) *lower_bound(dp.begin(), dp.end(), a) = a;
    return (int)(lower_bound(dp.begin(), dp.end(), sup) - dp.begin());
}
