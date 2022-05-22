# セグメント木
***
完全二分木の頂点に配列の区間を対応させることで
* 値の更新
* 区間内の総和や最小値、XOR


などに(配列の長さをNとして)O(logN)で答えることができるデータ構造
* 根が全要素を含む範囲、葉が一要素のみの範囲
* 値の更新は葉から根へ昇るように更新する
* クエリへの回答は根から葉へ下り正しい区間へ進んでいく

## メモ
[モノイド](https://ja.wikipedia.org/wiki/%E3%83%A2%E3%83%8E%E3%82%A4%E3%83%89)に対して正しくクエリに答えることができる
* a f (b f c) = (a f b) f c
* a f 0 = aとなる0の存在

他にも遅延評価、永続、2D~等似たセグ木ポケモンが多く存在する
* セグ木はイーブイ的なものと思っておくと良い

TODO: 非再帰verを実装する
* アローラの姿的な

## 使い方
コンストラクタseg(array, function, elem)

において第一引数が載せたい配列

第二引数が演算(auto f = [](int a, int b){return (a + b);})等

第三引数が単位元(a f elem = aを満たすelem)

seg.updateは可算ではなく代入であることに注意

## 計算量
初期化O(N)

クエリO(logN)

## verify
[AOJ_DSL2_A](https://onlinejudge.u-aizu.ac.jp/status/users/zawakasu/submissions/1/DSL_2_A/judge/6615886/C++11)

[AOJ_DSL2_B](https://onlinejudge.u-aizu.ac.jp/status/users/zawakasu/submissions/1/DSL_2_B/judge/6624212/C++11)

[ABC185-F](https://atcoder.jp/contests/abc185/submissions/31770793)
