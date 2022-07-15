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
  bundledCode: "#line 1 \"sort/insertionSort.cpp\"\n#include <vector>\nvoid insertionSort(vector<int>&\
    \ array) {\n    for (int i = 0 ; i < array.size() ; i++) {\n        int key =\
    \ array[i];\n        int j = i - 1;\n        while (j >= 0 and array[j] > key)\
    \ {\n            array[j + 1] = array[j];\n            j--;\n        }\n     \
    \   array[j + 1] = key;\n    }\n}\n"
  code: "#include <vector>\nvoid insertionSort(vector<int>& array) {\n    for (int\
    \ i = 0 ; i < array.size() ; i++) {\n        int key = array[i];\n        int\
    \ j = i - 1;\n        while (j >= 0 and array[j] > key) {\n            array[j\
    \ + 1] = array[j];\n            j--;\n        }\n        array[j + 1] = key;\n\
    \    }\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: sort/insertionSort.cpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: sort/insertionSort.cpp
layout: document
redirect_from:
- /library/sort/insertionSort.cpp
- /library/sort/insertionSort.cpp.html
title: sort/insertionSort.cpp
---
