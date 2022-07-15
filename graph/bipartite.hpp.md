---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/bipartite.hpp\"\n#include <vector>\nusing namespace\
    \ std;\n\nclass bipartite {\n\nprivate:\n    vector<vector<int>> Graph;\n    bool\
    \ can;\n    int red;\n    vector<int> color;\n\n    int countUp() {\n        int\
    \ res = 0;\n        for (int i = 0 ; i < color.size() ; i++) if (!color[i]) res++;\n\
    \        return res;\n    }\n\n    bool dfs(int v, int c) {\n        color[v]\
    \ = c;\n        for (auto& x : Graph[v]) {\n            if (color[x] == c) return\
    \ false;\n            if (color[x] == -1 and !dfs(x, 1 - c)) return false;\n \
    \       }\n        return true;\n    }\n\n    bool build() {\n        for (int\
    \ i = 0 ; i < color.size() ; i++) if (color[i] == -1) if (!dfs(i, 0)) return false;\n\
    \        red = countUp();\n        return true;\n    }\n\npublic: \n    bipartite(vector<vector<int>>&\
    \ G) {\n        Graph = G;\n        color = vector<int>(G.size(), -1);\n     \
    \   can = build();\n    }\n\n    bipartite(int n, int m, int type) {\n       \
    \ Graph = vector<vector<int>>(n);\n        color = vector<int>(n, -1);\n     \
    \   for (int _ = 0 ; _ < m ; _++) {\n            int u, v; cin >> u >> v;\n  \
    \          Graph[u - 1].emplace_back(v - 1);\n            if (type == 1) continue;\n\
    \            Graph[v - 1].emplace_back(u - 1);\n        }\n        can = build();\n\
    \    }\n\n    int getColor(int v) {return color[v];}\n\n    vector<int> getAdjust(int\
    \ v) {return Graph[v];} \n\n    int getRed() {return red;}\n\n    int getBlue()\
    \ {return color.size() - red;}\n};\n"
  code: "#include <vector>\nusing namespace std;\n\nclass bipartite {\n\nprivate:\n\
    \    vector<vector<int>> Graph;\n    bool can;\n    int red;\n    vector<int>\
    \ color;\n\n    int countUp() {\n        int res = 0;\n        for (int i = 0\
    \ ; i < color.size() ; i++) if (!color[i]) res++;\n        return res;\n    }\n\
    \n    bool dfs(int v, int c) {\n        color[v] = c;\n        for (auto& x :\
    \ Graph[v]) {\n            if (color[x] == c) return false;\n            if (color[x]\
    \ == -1 and !dfs(x, 1 - c)) return false;\n        }\n        return true;\n \
    \   }\n\n    bool build() {\n        for (int i = 0 ; i < color.size() ; i++)\
    \ if (color[i] == -1) if (!dfs(i, 0)) return false;\n        red = countUp();\n\
    \        return true;\n    }\n\npublic: \n    bipartite(vector<vector<int>>& G)\
    \ {\n        Graph = G;\n        color = vector<int>(G.size(), -1);\n        can\
    \ = build();\n    }\n\n    bipartite(int n, int m, int type) {\n        Graph\
    \ = vector<vector<int>>(n);\n        color = vector<int>(n, -1);\n        for\
    \ (int _ = 0 ; _ < m ; _++) {\n            int u, v; cin >> u >> v;\n        \
    \    Graph[u - 1].emplace_back(v - 1);\n            if (type == 1) continue;\n\
    \            Graph[v - 1].emplace_back(u - 1);\n        }\n        can = build();\n\
    \    }\n\n    int getColor(int v) {return color[v];}\n\n    vector<int> getAdjust(int\
    \ v) {return Graph[v];} \n\n    int getRed() {return red;}\n\n    int getBlue()\
    \ {return color.size() - red;}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/bipartite.hpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/bipartite.hpp
layout: document
redirect_from:
- /library/graph/bipartite.hpp
- /library/graph/bipartite.hpp.html
title: graph/bipartite.hpp
---
