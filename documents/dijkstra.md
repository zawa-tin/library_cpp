# ダイクストラ法
***

重み付きグラフのある一頂点から連結な頂点全ての最短経路を求めるアルゴリズム


負の重みが無いと正常に動作する


グラフアルゴリズム界のPewDiePieだね


## 使い方

**C++17でコンパイルする**


コンストラクタに隣接リスト表現の二次元タプルvectorを入れる。（三番目の要素は辺の番号）


返り値のinfoは始点からの最短距離、復元経路、最短経路木の辺


ダイクストラは定数倍で殺してくる問題が多いので適宜問題に沿うように変更しながら使うこと


二点間の距離を求める方は未verifyです


**参考**
https://atcoder.jp/contests/abc252/submissions/31734684


https://zenn.dev/reputeless/books/standard-cpp-for-competitive-programming/viewer/library-tuple


蟻本

## 挙動
BFSのキューを優先度付きキューにする -> 始点から近い順に探索できる -> 距離を決定できる

## 計算量
頂点の数をV、辺の数をEとしてO(ElogV)
- 最短経路の更新の回数がE回、優先度付きキューに出し入れがO(V)回


## verify
[ABC252-E](https://atcoder.jp/contests/abc252/submissions/33064208)

[AOJ GRL_1_A](https://onlinejudge.u-aizu.ac.jp/status/users/zawakasu/submissions/1/GRL_1_A/judge/6798749/C++17)
