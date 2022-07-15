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
  bundledCode: "#line 1 \"math/isPrime.hpp\"\nbool isPrime(long long a) {\n    if\
    \ (a < 2) return false;\n    if (a > 2 and a % 2 == 0) return false;\n    for\
    \ (int i = 3 ; i * i <= a ; i += 2) if (a % i == 0) return false;\n    return\
    \ true;\n}\n"
  code: "bool isPrime(long long a) {\n    if (a < 2) return false;\n    if (a > 2\
    \ and a % 2 == 0) return false;\n    for (int i = 3 ; i * i <= a ; i += 2) if\
    \ (a % i == 0) return false;\n    return true;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/isPrime.hpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/isPrime.hpp
layout: document
redirect_from:
- /library/math/isPrime.hpp
- /library/math/isPrime.hpp.html
title: math/isPrime.hpp
---
