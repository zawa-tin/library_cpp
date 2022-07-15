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
  bundledCode: "#line 1 \"math/factorize.hpp\"\n#include <vector>\nusing namespace\
    \ std;\n\nvector<pair<int, int>> factorize (long long x) {\n    vector<pair<int,\
    \ int>> res;\n    for (int i = 2 ; i * i <= x ; i++) if (x % i == 0) {\n     \
    \   res.emplace_back(i, 0);\n        while (x % i == 0) {\n            res.back().second++;\n\
    \            x /= i;\n        }\n    }\n\n    if (x != 1) res.emplace_back(x,\
    \ 1);\n\n    return res;\n}\n"
  code: "#include <vector>\nusing namespace std;\n\nvector<pair<int, int>> factorize\
    \ (long long x) {\n    vector<pair<int, int>> res;\n    for (int i = 2 ; i * i\
    \ <= x ; i++) if (x % i == 0) {\n        res.emplace_back(i, 0);\n        while\
    \ (x % i == 0) {\n            res.back().second++;\n            x /= i;\n    \
    \    }\n    }\n\n    if (x != 1) res.emplace_back(x, 1);\n\n    return res;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: math/factorize.hpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/factorize.hpp
layout: document
redirect_from:
- /library/math/factorize.hpp
- /library/math/factorize.hpp.html
title: math/factorize.hpp
---
