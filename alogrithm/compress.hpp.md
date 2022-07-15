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
  bundledCode: "#line 1 \"alogrithm/compress.hpp\"\n#include <vector>\n#include <algorithm>\n\
    \ntemplate <typename T>\nvector<int> compress(const vector<T>& a) {\n    vector<T>\
    \ cp = a;\n    sort(cp.begin(), cp.end());\n    cp.erase(unique(cp.begin(), cp.end()),\
    \ cp.end());\n    vector<int> res(a.size());\n    for (int i = 0 ; i < a.size()\
    \ ; i++) res[i] = lower_bound(cp.begin(), cp.end(), a[i]) - cp.begin();\n    return\
    \ res;\n}\n"
  code: "#include <vector>\n#include <algorithm>\n\ntemplate <typename T>\nvector<int>\
    \ compress(const vector<T>& a) {\n    vector<T> cp = a;\n    sort(cp.begin(),\
    \ cp.end());\n    cp.erase(unique(cp.begin(), cp.end()), cp.end());\n    vector<int>\
    \ res(a.size());\n    for (int i = 0 ; i < a.size() ; i++) res[i] = lower_bound(cp.begin(),\
    \ cp.end(), a[i]) - cp.begin();\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: alogrithm/compress.hpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: alogrithm/compress.hpp
layout: document
redirect_from:
- /library/alogrithm/compress.hpp
- /library/alogrithm/compress.hpp.html
title: alogrithm/compress.hpp
---
