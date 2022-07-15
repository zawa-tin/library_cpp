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
  bundledCode: "#line 1 \"math/binaryCoeff.hpp\"\n#include <vector>\n\ntemplate <typename\
    \ T>\nclass binaryCoeff {\nprivate:\n    vector<vector<T>> table;\npublic:\n \
    \   binaryCoeff(int maxn, int maxk) {\n        table = vector<vector<T>>(maxn\
    \ + 1, vector<T>(maxk + 1));\n        table.front().front() = 1;\n        for\
    \ (int i = 1 ; i <= maxn ; i++) {\n            table[i].front() = 1;\n       \
    \     for (int j = 1 ; j <= maxk ; j++) {\n                table[i][j] = table[i\
    \ - 1][j - 1] + table[i - 1][j];\n            }\n        }\n    }\n\n    T nCk(int\
    \ n, int k) {return table.at(n).at(k);}\n};\n"
  code: "#include <vector>\n\ntemplate <typename T>\nclass binaryCoeff {\nprivate:\n\
    \    vector<vector<T>> table;\npublic:\n    binaryCoeff(int maxn, int maxk) {\n\
    \        table = vector<vector<T>>(maxn + 1, vector<T>(maxk + 1));\n        table.front().front()\
    \ = 1;\n        for (int i = 1 ; i <= maxn ; i++) {\n            table[i].front()\
    \ = 1;\n            for (int j = 1 ; j <= maxk ; j++) {\n                table[i][j]\
    \ = table[i - 1][j - 1] + table[i - 1][j];\n            }\n        }\n    }\n\n\
    \    T nCk(int n, int k) {return table.at(n).at(k);}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: math/binaryCoeff.hpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/binaryCoeff.hpp
layout: document
redirect_from:
- /library/math/binaryCoeff.hpp
- /library/math/binaryCoeff.hpp.html
title: math/binaryCoeff.hpp
---
