---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: dataStructure/dsu.hpp
    title: dataStructure/dsu.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/kruskal.hpp\"\n#include <vector>\n#include <algorithm>\n\
    #line 2 \"dataStructure/dsu.hpp\"\n\nclass dsu {\nprivate:\n    vector<int> parent;\n\
    \    vector<int> rank;\n\n    int find(int x) {\n        if (parent[x] == x) return\
    \ x;\n        else return parent[x] = find(parent[x]);\n    }\n\npublic:\n   \
    \ dsu(int n) {\n        parent = vector<int>(n);\n        rank = vector<int>(n,\
    \ 0);\n        for (int i = 0 ; i < n ; i++) parent[i] = i;\n    }\n\n    void\
    \ merge(int x, int y) {\n        x = find(x);\n        y = find(y);\n        if\
    \ (x == y) return;\n\n        if (rank[x] < rank[y]) {\n            parent[x]\
    \ = y;\n        }\n        else {\n            parent[y] = x;\n            if\
    \ (rank[x] == rank[y]) rank[x]++;\n        }\n    } \n\n    bool same(int x, int\
    \ y) {\n        return find(x) == find(y);\n    }\n\n};\n#line 4 \"graph/kruskal.hpp\"\
    \n\nclass kruskal {\nprivate:\n    using tup = tuple<long long, int, int, int>;\n\
    \    vector<tup> G;\n    vector<tup> mst;\n    \npublic:\n    kruskal(vector<tup>&\
    \ G) {this->G = G;}\n\n    kruskal(int m) {\n        for (int i = 1 ; i <= m ;\
    \ i++) {\n            int w, u, v, id; cin >> w >> u >> v >> id;\n           \
    \ G.emplace_back(w, u - 1, v - 1, id);\n            // if you want undirect please\
    \ comment out\n            G.emplace_back(w, v - 1, u - 1, id);\n        }\n \
    \   }\n\n    long long build() {\n        dsu uf = dsu(G.size());\n        long\
    \ long sum = 0;\n        sort(G.begin(), G.end());\n        for (int i = 0 ; i\
    \ < G.size() ; i++) {\n            if (uf.same(get<1>(G[i]), get<2>(G[i]))) continue;\n\
    \            uf.merge(get<1>(G[i]), get<2>(G[i]));\n            mst.push_back(G[i]);\n\
    \            sum += get<0>(G[i]);\n        }\n        sort(mst.begin(), mst.end());\n\
    \        return sum;\n    }\n    \n    vector<tup> getMst() {return mst;} \n};\n"
  code: "#include <vector>\n#include <algorithm>\n#include \"../dataStructure/dsu.hpp\"\
    \n\nclass kruskal {\nprivate:\n    using tup = tuple<long long, int, int, int>;\n\
    \    vector<tup> G;\n    vector<tup> mst;\n    \npublic:\n    kruskal(vector<tup>&\
    \ G) {this->G = G;}\n\n    kruskal(int m) {\n        for (int i = 1 ; i <= m ;\
    \ i++) {\n            int w, u, v, id; cin >> w >> u >> v >> id;\n           \
    \ G.emplace_back(w, u - 1, v - 1, id);\n            // if you want undirect please\
    \ comment out\n            G.emplace_back(w, v - 1, u - 1, id);\n        }\n \
    \   }\n\n    long long build() {\n        dsu uf = dsu(G.size());\n        long\
    \ long sum = 0;\n        sort(G.begin(), G.end());\n        for (int i = 0 ; i\
    \ < G.size() ; i++) {\n            if (uf.same(get<1>(G[i]), get<2>(G[i]))) continue;\n\
    \            uf.merge(get<1>(G[i]), get<2>(G[i]));\n            mst.push_back(G[i]);\n\
    \            sum += get<0>(G[i]);\n        }\n        sort(mst.begin(), mst.end());\n\
    \        return sum;\n    }\n    \n    vector<tup> getMst() {return mst;} \n};\n"
  dependsOn:
  - dataStructure/dsu.hpp
  isVerificationFile: false
  path: graph/kruskal.hpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/kruskal.hpp
layout: document
redirect_from:
- /library/graph/kruskal.hpp
- /library/graph/kruskal.hpp.html
title: graph/kruskal.hpp
---
