#include <vector>
#include <algorithm>

template<typename T>
class compress {

private:
    vector<T> cp;

public:
    compress(vector<T>& a) {
        cp = a;
        sort(cp.begin(), cp.end());
        cp.erase(unique(cp.begin(), cp.end()), cp.end());
    }

    int get(int x) {
        return lower_bound(cp.begin(), cp.end(), x) - cp.begin();
    }

    vector<int> get(vector<T>& a) {
        vector<int> res(a.size());
        for (int i = 0 ; i < a.size() ; i++) res[i] = lower_bound(cp.begin(), cp.end(), a[i]) - cp.begin();
        return res;
    }
};
