#include <vector>
#include <queue>
using namespace std;

class dijkstra {
private:
    const long long sup = (1 << 60);
    using tup = tuple<int, int, int>;
    vector<vector<tup>> G;
    vector<long long> dist;
    vector<int> idx;

public:
    dijkstra(vector<vector<tup>>& G) {this->G = G;}

    dijkstra(int n, int m) {
        G = vector<vector<tup>>(n);
        for (int i = 1 ; i <= m ; i++) {
            int u, v, cost; cin >> u >> v >> cost;
            G[u - 1].emplace_back(make_tuple(v - 1, cost, i));
            // If you want Undirected, please comment out below this 
            G[v - 1].emplace_back(make_tuple(u - 1, cost, i));
        }
    }

    void build(int s) {
        using p = pair<long long, int>;
        priority_queue<p, vector<p>, greater<p>> que;
        dist = vector<long long>(G.size(), sup);
        idx = vector<int>(G.size());
        dist[s] = 0;
        que.emplace(make_pair(0, s));
        
        while(que.size()) {
            auto [d, v] = que.top(); que.pop();
            // if (v == goal) break;
            if (dist[v] != d) continue;
            for (auto[x, c, i] : G[v]) {
                if (dist[x] > dist[v] + c) {
                    dist[x] = dist[v] + c;
                    que.emplace(make_pair(dist[x], x));
                    idx[x] = i;
                }
            }
        }
    }
    
    vector<int> getIdx() {return idx;}
    vector<long long> getDist() {return dist;}
    long long getDist(int v) {return (dist[v] == sup ? -1 : dist[v]);}
};
