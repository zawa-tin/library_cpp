#include <vector>
#include <queue>
#include <numeric>

// 引数tuple<頂点, コスト, 辺番号>
struct shortestPath {
    vector<long long> dist;
    vector<int> prev;
    vector<int> idx;
};

shortestPath dijkstra(const vector<vector<tuple<int, long long, int>>>& G, int s) {
    shortestPath res;
    res.dist = vector<long long>(G.size(), (LONG_LONG_MAX >> 1));
    res.prev = vector<int>(G.size(), -1);
    res.idx = vector<int>(G.size(), -1);

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> que;
    res.dist[s] = 0;
    que.emplace(0, s);

    while(que.size()) {
        auto [d, v] = que.top(); que.pop();
        if (res.dist[v] != d) continue;
        for (auto [x, c, i] : G[v]) {
            if (res.dist[x] <= d + c) continue;
            res.dist[x] = d + c;
            que.emplace(res.dist[x], x);
            res.prev[x] = v;
            res.idx[x] = i;
        }
    }

    return res;
}

pair<long long, vector<int>> dijkstra(const vector<vector<pair<int, long long>>>& G, int s, int g) {
    vector<long long> dist(G.size(), (LONG_LONG_MAX >> 1));
    vector<int> prev(G.size());
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> que;
    que.emplace(0, s);
    while(que.size()) {
        auto [d, v] = que.top(); que.pop();
        if (v == g) break;
        if (dist[v] != d) continue;
        for (auto [x, c] : G[v]) {
            if (dist[v] <= dist[x] + c) continue;
            dist[x] = d + c;
            que.emplace(dist[x], x);
        }
    }

    return {dist[g], prev};
}
