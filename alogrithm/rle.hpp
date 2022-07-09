#include <vector>
#include <string>

vector<pair<char, int>> rle(const string& s) {
    vector<pair<char, int>> res;
    for (int i = 0 ; i < s.size() ; i++) {
        if (res.empty() or res.back().first != s[i]) res.emplace_back(s[i], 1);
        else res.back().second++;
    }
    return res;
}

// if you do use string, you do not have to copy
template<typename T>
vector<pair<T, int>> rle(const vector<T>& a) {
    vector<pair<T, int>> res;
    for (int i = 0 ; i < a.size() ; i++) {
        if (res.empty() or res.back().first != a[i]) res.emplace_back(a[i], 1);
        else res.back().second++;
    }
    return res;
}
