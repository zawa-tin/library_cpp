---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: graph/kruskal.hpp
    title: graph/kruskal.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"dataStructure/dsu.hpp\"\n#include <vector>\n\nclass dsu\
    \ {\nprivate:\n    vector<int> parent;\n    vector<int> rank;\n\n    int find(int\
    \ x) {\n        if (parent[x] == x) return x;\n        else return parent[x] =\
    \ find(parent[x]);\n    }\n\npublic:\n    dsu(int n) {\n        parent = vector<int>(n);\n\
    \        rank = vector<int>(n, 0);\n        for (int i = 0 ; i < n ; i++) parent[i]\
    \ = i;\n    }\n\n    void merge(int x, int y) {\n        x = find(x);\n      \
    \  y = find(y);\n        if (x == y) return;\n\n        if (rank[x] < rank[y])\
    \ {\n            parent[x] = y;\n        }\n        else {\n            parent[y]\
    \ = x;\n            if (rank[x] == rank[y]) rank[x]++;\n        }\n    } \n\n\
    \    bool same(int x, int y) {\n        return find(x) == find(y);\n    }\n\n\
    };\n"
  code: "#include <vector>\n\nclass dsu {\nprivate:\n    vector<int> parent;\n   \
    \ vector<int> rank;\n\n    int find(int x) {\n        if (parent[x] == x) return\
    \ x;\n        else return parent[x] = find(parent[x]);\n    }\n\npublic:\n   \
    \ dsu(int n) {\n        parent = vector<int>(n);\n        rank = vector<int>(n,\
    \ 0);\n        for (int i = 0 ; i < n ; i++) parent[i] = i;\n    }\n\n    void\
    \ merge(int x, int y) {\n        x = find(x);\n        y = find(y);\n        if\
    \ (x == y) return;\n\n        if (rank[x] < rank[y]) {\n            parent[x]\
    \ = y;\n        }\n        else {\n            parent[y] = x;\n            if\
    \ (rank[x] == rank[y]) rank[x]++;\n        }\n    } \n\n    bool same(int x, int\
    \ y) {\n        return find(x) == find(y);\n    }\n\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: dataStructure/dsu.hpp
  requiredBy:
  - graph/kruskal.hpp
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: dataStructure/dsu.hpp
layout: document
redirect_from:
- /library/dataStructure/dsu.hpp
- /library/dataStructure/dsu.hpp.html
title: dataStructure/dsu.hpp
---
