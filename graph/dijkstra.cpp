#include <vector>
#include <queue>
#include <limits.h>
using namespace std;

class dijkstra {
private:
    const long long sup = LONG_LONG_MAX / 4 - 1;
    
    vector<vector<pair<int, int>>> G;
    vector<vector<pair<int, int>>> MT;
    vector<pair<int, int>> Medges;

    vector<long long> dist;
    vector<int> prev;
    vector<int> used;

public:
    dijkstra(vector<vector<pair<int, int>>>& G) {
       this->G = G;
    }

    dijkstra(int n, int m, bool direct) {
        G = vector<vector<pair<int, int>>>(n);

        for (int _ = 0 ; _ < m ; _++) {
            int u, v, cost; cin >> u >> v >> cost;
            G[u - 1].emplace_back(make_pair(v - 1, cost));
            if (direct) continue;
            G[v - 1].emplace_back(make_pair(u - 1, cost));
        }
    }

    void build(int s) {
        dist = vector<long long>(G.size(), sup);
        prev = vector<int>(G.size(), -1);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
        dist[s] = 0;
        que.emplace(make_pair(0, s));

        while(!que.empty()) {
            pair<int, int> poped = que.top(); que.pop();
            if (dist[poped.second] > poped.first) continue;
            for (auto& x : G[poped.second]) {
                if (dist[x.first] < dist[poped.second] + x.second) {
                    dist[x.first] = dist[poped.second] + x.second;
                    que.emplace(make_pair(dist[x.first], x.first));
                    prev[x.first] = poped.second;
                }
            }
        }
    }

    void makeMT() {
        used = vector<int>(G.size(), 0);
        MT = vector<vector<pair<int, int>>>(G.size());
        for (int i = 0 ; i < G.size() ; i++) {
            if (prev[i] == -1) continue;
            MT[i].emplace_back(make_pair(prev[i], dist[i] - dist[prev[i]]));
            MT[prev[i]].emplace_back(make_pair(i, dist[i] - dist[prev[i]]));
        }
    }

    long long getDist(int v) {return (dist[v] == sup ? -1 : dist[v]);}
    
    vector<int> getPath(int v, int s) {
        vector<int> res;
        do {
            res.emplace_back(v);
            v = prev[v];
        } while(v != -1 and v != s);
        return res;
    }
};
