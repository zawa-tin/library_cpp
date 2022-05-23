#pragma once
#include "./graphTemplate.hpp"
#include "../dataStructure/dsu.hpp"

class kruskal {
private:
    dsu uf;
    long long sum;

    void build(vector<edge>& edges) {

    }

public:
    vector<edge> mst;
    
    kruskal(vector<vector<edge>>& G) {
        vector<edge> edges;
    }

    kruskal(vector<edge>& edges) {
        build(edges);    
    }
};
