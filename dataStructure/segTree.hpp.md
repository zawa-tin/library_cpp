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
  bundledCode: "#line 2 \"dataStructure/segTree.hpp\"\n#include <vector>\n#include\
    \ <functional>\nusing namespace std;\n// clang-format off\ntemplate <typename\
    \ T>\nclass seg_tree {\n    using F = function<T(T, T)>;\nprivate:\n    int n;\n\
    \    T elem;\n    vector<T> container;\n    F func; \n\n    void set_n(int n)\
    \ {\n        this->n = 1;\n        while(this->n < n) this->n <<= 1;\n    }\n\n\
    \    void build(vector<T>& input, int elem) {\n        container = vector<T>(2\
    \ * n, elem);\n        this->elem = elem;\n        for (int i = 0 ; i < input.size()\
    \ ; i++) container[n + i] = input[i];\n        for (int i = n - 1 ; i >= 1 ; i--)\
    \ container[i] = func(container[2 * i], container[2 * i + 1]);\n    }\n\n    T\
    \ rec(int index, int l, int r, int a, int b) {\n        // \u5B8C\u5168\u306B\u5185\
    \u90E8\u306B\u542B\u307E\u308C\u3066\u3044\u308B\u5834\u5408\n        if (l <=\
    \ a and b <= r) return container[index];\n        // \u5B8C\u5168\u306B\u5916\u90E8\
    \u306E\u6642\n        if (b <= l or r <= a) return elem;\n        // \u307E\u305F\
    \u304C\u3063\u3066\u3044\u308B\u6642\n        return func(rec(2 * index, l, r,\
    \ a, (a + b) / 2), rec(2 * index + 1, l, r, (a + b) / 2, b));\n    }\n\npublic:\n\
    \    int getn() {return n;}\n    T get(int index) {return container[index];}\n\
    \n    seg_tree(vector<T>& input) {\n        set_n(input.size());\n        build(input,\
    \ 0);\n    }\n\n    seg_tree(vector<T>& input, int elem) {\n        set_n(input.size());\n\
    \        func = [](T a, T b){return a + b;};\n        build(input, elem);\n  \
    \  }\n\n    seg_tree(vector<T>& input, F func, int elem) {\n       set_n(input.size());\n\
    \       this->func = func;\n       build(input, elem);\n    }\n\n    void update(int\
    \ index, int value) {\n        index += n;\n        container[index] = value;\n\
    \        while(index > 1) {\n            index /= 2;\n            container[index]\
    \ = func(container[2 * index], container[2 * index + 1]);\n        }\n    }\n\
    \    \n    // \u534A\u958B\u533A\u9593\n    T query(int l, int r) {\n        return\
    \ rec(1, l + 1, r + 1, 1, n + 1);        \n    }\n\n    // \u30C7\u30D0\u30C3\u30B0\
    \u30D7\u30EA\u30F3\u30C8\n    void print() {\n        for (auto& x : container)\
    \ cout << x << \" \";\n        cout << endl;\n    }\n\n};\n"
  code: "#pragma once\n#include <vector>\n#include <functional>\nusing namespace std;\n\
    // clang-format off\ntemplate <typename T>\nclass seg_tree {\n    using F = function<T(T,\
    \ T)>;\nprivate:\n    int n;\n    T elem;\n    vector<T> container;\n    F func;\
    \ \n\n    void set_n(int n) {\n        this->n = 1;\n        while(this->n < n)\
    \ this->n <<= 1;\n    }\n\n    void build(vector<T>& input, int elem) {\n    \
    \    container = vector<T>(2 * n, elem);\n        this->elem = elem;\n       \
    \ for (int i = 0 ; i < input.size() ; i++) container[n + i] = input[i];\n    \
    \    for (int i = n - 1 ; i >= 1 ; i--) container[i] = func(container[2 * i],\
    \ container[2 * i + 1]);\n    }\n\n    T rec(int index, int l, int r, int a, int\
    \ b) {\n        // \u5B8C\u5168\u306B\u5185\u90E8\u306B\u542B\u307E\u308C\u3066\
    \u3044\u308B\u5834\u5408\n        if (l <= a and b <= r) return container[index];\n\
    \        // \u5B8C\u5168\u306B\u5916\u90E8\u306E\u6642\n        if (b <= l or\
    \ r <= a) return elem;\n        // \u307E\u305F\u304C\u3063\u3066\u3044\u308B\u6642\
    \n        return func(rec(2 * index, l, r, a, (a + b) / 2), rec(2 * index + 1,\
    \ l, r, (a + b) / 2, b));\n    }\n\npublic:\n    int getn() {return n;}\n    T\
    \ get(int index) {return container[index];}\n\n    seg_tree(vector<T>& input)\
    \ {\n        set_n(input.size());\n        build(input, 0);\n    }\n\n    seg_tree(vector<T>&\
    \ input, int elem) {\n        set_n(input.size());\n        func = [](T a, T b){return\
    \ a + b;};\n        build(input, elem);\n    }\n\n    seg_tree(vector<T>& input,\
    \ F func, int elem) {\n       set_n(input.size());\n       this->func = func;\n\
    \       build(input, elem);\n    }\n\n    void update(int index, int value) {\n\
    \        index += n;\n        container[index] = value;\n        while(index >\
    \ 1) {\n            index /= 2;\n            container[index] = func(container[2\
    \ * index], container[2 * index + 1]);\n        }\n    }\n    \n    // \u534A\u958B\
    \u533A\u9593\n    T query(int l, int r) {\n        return rec(1, l + 1, r + 1,\
    \ 1, n + 1);        \n    }\n\n    // \u30C7\u30D0\u30C3\u30B0\u30D7\u30EA\u30F3\
    \u30C8\n    void print() {\n        for (auto& x : container) cout << x << \"\
    \ \";\n        cout << endl;\n    }\n\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: dataStructure/segTree.hpp
  requiredBy: []
  timestamp: '2022-07-15 23:56:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: dataStructure/segTree.hpp
layout: document
redirect_from:
- /library/dataStructure/segTree.hpp
- /library/dataStructure/segTree.hpp.html
title: dataStructure/segTree.hpp
---
