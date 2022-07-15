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
  bundledCode: "#line 1 \"alogrithm/lis.hpp\"\n#include <vector>\n#include <algorithm>\n\
    #include <climits>\n\nint calcLis(const vector<long long>& as) {\n    const long\
    \ long sup = LONG_LONG_MAX - 100;\n    vector<long long> dp(as.size(), sup);\n\
    \    for (auto a : as) *lower_bound(dp.begin(), dp.end(), a) = a;\n    return\
    \ (int)(lower_bound(dp.begin(), dp.end(), sup) - dp.begin());\n}\n"
  code: "#include <vector>\n#include <algorithm>\n#include <climits>\n\nint calcLis(const\
    \ vector<long long>& as) {\n    const long long sup = LONG_LONG_MAX - 100;\n \
    \   vector<long long> dp(as.size(), sup);\n    for (auto a : as) *lower_bound(dp.begin(),\
    \ dp.end(), a) = a;\n    return (int)(lower_bound(dp.begin(), dp.end(), sup) -\
    \ dp.begin());\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: alogrithm/lis.hpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: alogrithm/lis.hpp
layout: document
redirect_from:
- /library/alogrithm/lis.hpp
- /library/alogrithm/lis.hpp.html
title: alogrithm/lis.hpp
---
