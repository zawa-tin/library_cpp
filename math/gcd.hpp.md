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
  bundledCode: "#line 1 \"math/gcd.hpp\"\nunsigned long long gcd(unsigned long long\
    \ a, unsigned long long b) {\n    if (b == 0) return a;\n    return gcd(b, a %\
    \ b);\n}\n"
  code: "unsigned long long gcd(unsigned long long a, unsigned long long b) {\n  \
    \  if (b == 0) return a;\n    return gcd(b, a % b);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/gcd.hpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/gcd.hpp
layout: document
redirect_from:
- /library/math/gcd.hpp
- /library/math/gcd.hpp.html
title: math/gcd.hpp
---
