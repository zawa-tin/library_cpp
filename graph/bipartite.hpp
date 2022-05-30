#include <vector>
using namespace std;

class bipartite {

private:
    vector<vector<int>> Graph;
    bool can;
    int red;
    vector<int> color;

    int countUp() {
        int res = 0;
        for (int i = 0 ; i < color.size() ; i++) if (!color[i]) res++;
        return res;
    }

    bool dfs(int v, int c) {
        color[v] = c;
        for (auto& x : Graph[v]) {
            if (color[x] == c) return false;
            if (color[x] == -1 and !dfs(x, 1 - c)) return false;
        }
        return true;
    }

    bool build() {
        for (int i = 0 ; i < color.size() ; i++) if (color[i] == -1) if (!dfs(i, 0)) return false;
        red = countUp();
        return true;
    }

public: 
    bipartite(vector<vector<int>>& G) {
        Graph = G;
        color = vector<int>(G.size(), -1);
        can = build();
    }

    bipartite(int n, int m, int type) {
        Graph = vector<vector<int>>(n);
        color = vector<int>(n, -1);
        for (int _ = 0 ; _ < m ; _++) {
            int u, v; cin >> u >> v;
            Graph[u - 1].emplace_back(v - 1);
            if (type == 1) continue;
            Graph[v - 1].emplace_back(u - 1);
        }
        can = build();
    }

    int getColor(int v) {return color[v];}

    vector<int> getAdjust(int v) {return Graph[v];} 

    int getRed() {return red;}

    int getBlue() {return color.size() - red;}
};
