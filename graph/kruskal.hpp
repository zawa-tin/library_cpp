#include <vector>
#include <algorithm>
#include "../dataStructure/dsu.hpp""

class kruskal {
private:
    using tup = tuple<long long, int, int, int>;
    vector<tup> G;
    vector<tup> mst;
    
public:
    kruskal(vector<tup>& G) {this->G = G;}

    kruskal(int m) {
        for (int i = 1 ; i <= m ; i++) {
            int w, u, v, id; cin >> w >> u >> v >> id;
            G.emplace_back(w, u - 1, v - 1, id);
            // if you want undirect please comment out
            G.emplace_back(w, v - 1, u - 1, id);
        }
    }

    long long build() {
        dsu uf = dsu(G.size());
        long long sum = 0;
        sort(G.begin(), G.end());
        for (int i = 0 ; i < G.size() ; i++) {
            if (uf.same(get<1>(G[i]), get<2>(G[i]))) continue;
            uf.merge(get<1>(G[i]), get<2>(G[i]));
            mst.push_back(G[i]);
            sum += get<0>(G[i]);
        }
        sort(mst.begin(), mst.end());
        return sum;
    }
    
    vector<tup> getMst() {return mst;} 
};
