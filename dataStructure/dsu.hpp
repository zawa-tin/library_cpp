#include <vector>

class dsu {
private:
    vector<int> parent;
    vector<int> rank;

    int find(int x) {
        if (parent[x] == x) return x;
        else return parent[x] = find(parent[x]);
    }

public:
    dsu(int n) {
        parent = vector<int>(n);
        rank = vector<int>(n, 0);
        for (int i = 0 ; i < n ; i++) parent[i] = i;
    }

    void merge(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return;

        if (rank[x] < rank[y]) {
            parent[x] = y;
        }
        else {
            parent[y] = x;
            if (rank[x] == rank[y]) rank[x]++;
        }
    } 

    bool same(int x, int y) {
        return find(x) == find(y);
    }

};
