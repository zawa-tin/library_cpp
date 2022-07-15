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
  bundledCode: "#line 1 \"alogrithm/rle.hpp\"\n#include <vector>\n#include <string>\n\
    \nvector<pair<char, int>> rle(const string& s) {\n    vector<pair<char, int>>\
    \ res;\n    for (int i = 0 ; i < s.size() ; i++) {\n        if (res.empty() or\
    \ res.back().first != s[i]) res.emplace_back(s[i], 1);\n        else res.back().second++;\n\
    \    }\n    return res;\n}\n\n// if you do use string, you do not have to copy\n\
    template<typename T>\nvector<pair<T, int>> rle(const vector<T>& a) {\n    vector<pair<T,\
    \ int>> res;\n    for (int i = 0 ; i < a.size() ; i++) {\n        if (res.empty()\
    \ or res.back().first != a[i]) res.emplace_back(a[i], 1);\n        else res.back().second++;\n\
    \    }\n    return res;\n}\n"
  code: "#include <vector>\n#include <string>\n\nvector<pair<char, int>> rle(const\
    \ string& s) {\n    vector<pair<char, int>> res;\n    for (int i = 0 ; i < s.size()\
    \ ; i++) {\n        if (res.empty() or res.back().first != s[i]) res.emplace_back(s[i],\
    \ 1);\n        else res.back().second++;\n    }\n    return res;\n}\n\n// if you\
    \ do use string, you do not have to copy\ntemplate<typename T>\nvector<pair<T,\
    \ int>> rle(const vector<T>& a) {\n    vector<pair<T, int>> res;\n    for (int\
    \ i = 0 ; i < a.size() ; i++) {\n        if (res.empty() or res.back().first !=\
    \ a[i]) res.emplace_back(a[i], 1);\n        else res.back().second++;\n    }\n\
    \    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: alogrithm/rle.hpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: alogrithm/rle.hpp
layout: document
redirect_from:
- /library/alogrithm/rle.hpp
- /library/alogrithm/rle.hpp.html
title: alogrithm/rle.hpp
---
