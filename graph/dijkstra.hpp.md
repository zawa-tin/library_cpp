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
  bundledCode: "#line 1 \"graph/dijkstra.hpp\"\n#include <vector>\n#include <queue>\n\
    #include <numeric>\n\n// \u5F15\u6570tuple<\u9802\u70B9, \u30B3\u30B9\u30C8, \u8FBA\
    \u756A\u53F7>\nstruct shortestPath {\n    vector<long long> dist;\n    vector<int>\
    \ prev;\n    vector<int> idx;\n};\n\nshortestPath dijkstra(const vector<vector<tuple<int,\
    \ long long, int>>>& G, int s) {\n    shortestPath res;\n    res.dist = vector<long\
    \ long>(G.size(), (LONG_LONG_MAX >> 1));\n    res.prev = vector<int>(G.size(),\
    \ -1);\n    res.idx = vector<int>(G.size(), -1);\n\n    priority_queue<pair<long\
    \ long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> que;\n\
    \    res.dist[s] = 0;\n    que.emplace(0, s);\n\n    while(que.size()) {\n   \
    \     auto [d, v] = que.top(); que.pop();\n        if (res.dist[v] != d) continue;\n\
    \        for (auto [x, c, i] : G[v]) {\n            if (res.dist[x] <= d + c)\
    \ continue;\n            res.dist[x] = d + c;\n            que.emplace(res.dist[x],\
    \ x);\n            res.prev[x] = v;\n            res.idx[x] = i;\n        }\n\
    \    }\n\n    return res;\n}\n\npair<long long, vector<int>> dijkstra(const vector<vector<pair<int,\
    \ long long>>>& G, int s, int g) {\n    vector<long long> dist(G.size(), (LONG_LONG_MAX\
    \ >> 1));\n    vector<int> prev(G.size());\n    priority_queue<pair<long long,\
    \ int>, vector<pair<long long, int>>, greater<pair<long long, int>>> que;\n  \
    \  que.emplace(0, s);\n    while(que.size()) {\n        auto [d, v] = que.top();\
    \ que.pop();\n        if (v == g) break;\n        if (dist[v] != d) continue;\n\
    \        for (auto [x, c] : G[v]) {\n            if (dist[v] <= dist[x] + c) continue;\n\
    \            dist[x] = d + c;\n            que.emplace(dist[x], x);\n        }\n\
    \    }\n\n    return {dist[g], prev};\n}\n"
  code: "#include <vector>\n#include <queue>\n#include <numeric>\n\n// \u5F15\u6570\
    tuple<\u9802\u70B9, \u30B3\u30B9\u30C8, \u8FBA\u756A\u53F7>\nstruct shortestPath\
    \ {\n    vector<long long> dist;\n    vector<int> prev;\n    vector<int> idx;\n\
    };\n\nshortestPath dijkstra(const vector<vector<tuple<int, long long, int>>>&\
    \ G, int s) {\n    shortestPath res;\n    res.dist = vector<long long>(G.size(),\
    \ (LONG_LONG_MAX >> 1));\n    res.prev = vector<int>(G.size(), -1);\n    res.idx\
    \ = vector<int>(G.size(), -1);\n\n    priority_queue<pair<long long, int>, vector<pair<long\
    \ long, int>>, greater<pair<long long, int>>> que;\n    res.dist[s] = 0;\n   \
    \ que.emplace(0, s);\n\n    while(que.size()) {\n        auto [d, v] = que.top();\
    \ que.pop();\n        if (res.dist[v] != d) continue;\n        for (auto [x, c,\
    \ i] : G[v]) {\n            if (res.dist[x] <= d + c) continue;\n            res.dist[x]\
    \ = d + c;\n            que.emplace(res.dist[x], x);\n            res.prev[x]\
    \ = v;\n            res.idx[x] = i;\n        }\n    }\n\n    return res;\n}\n\n\
    pair<long long, vector<int>> dijkstra(const vector<vector<pair<int, long long>>>&\
    \ G, int s, int g) {\n    vector<long long> dist(G.size(), (LONG_LONG_MAX >> 1));\n\
    \    vector<int> prev(G.size());\n    priority_queue<pair<long long, int>, vector<pair<long\
    \ long, int>>, greater<pair<long long, int>>> que;\n    que.emplace(0, s);\n \
    \   while(que.size()) {\n        auto [d, v] = que.top(); que.pop();\n       \
    \ if (v == g) break;\n        if (dist[v] != d) continue;\n        for (auto [x,\
    \ c] : G[v]) {\n            if (dist[v] <= dist[x] + c) continue;\n          \
    \  dist[x] = d + c;\n            que.emplace(dist[x], x);\n        }\n    }\n\n\
    \    return {dist[g], prev};\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/dijkstra.hpp
layout: document
redirect_from:
- /library/graph/dijkstra.hpp
- /library/graph/dijkstra.hpp.html
title: graph/dijkstra.hpp
---
