#include <vector>
#include <algorithm>

template <typename T>
vector<int> compress(const vector<T>& a) {
    vector<T> cp = a;
    sort(cp.begin(), cp.end());
    cp.erase(unique(cp.begin(), cp.end()), cp.end());
    vector<int> res(a.size());
    for (int i = 0 ; i < a.size() ; i++) res[i] = lower_bound(cp.begin(), cp.end(), a[i]) - cp.begin();
    return res;
}
