---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/primeSieve.cpp\"\n#include <vector>\n\nvector<int>\
    \ sieve(int n) {\n    vector<int> res(n + 1, 1);\n    res[0] = res[1] = 0;\n \
    \   for (int i = 0 ; i <= n ; i++) if (res[i]) {\n        for (int j = i + i ;\
    \ j <= n ; j += i) res[j] = 0;\n    }\n\n    return res;\n}\n"
  code: "#include <vector>\n\nvector<int> sieve(int n) {\n    vector<int> res(n +\
    \ 1, 1);\n    res[0] = res[1] = 0;\n    for (int i = 0 ; i <= n ; i++) if (res[i])\
    \ {\n        for (int j = i + i ; j <= n ; j += i) res[j] = 0;\n    }\n\n    return\
    \ res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/primeSieve.cpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/primeSieve.cpp
layout: document
redirect_from:
- /library/math/primeSieve.cpp
- /library/math/primeSieve.cpp.html
title: math/primeSieve.cpp
---
