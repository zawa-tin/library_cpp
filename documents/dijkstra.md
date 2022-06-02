# ダイクストラ法
***

重み付きグラフのある一頂点から連結な頂点全ての最短経路を求めるアルゴリズム

負の重みが無いと正常に動作する

グラフアルゴリズム界のPewDiePieだね


## 使い方

**C++17でコンパイルする**


コンストラクタに隣接リスト表現の二次元タプルvectorを入れる。（三番目の要素は辺の番号）


もしくは、頂点と辺の数を引数に入れるとAtCoderのグラフの入力形式に従って隣接リスト表現を構築する


build(int s)で始点を頂点sとした最短距離を計算する。


idxには最短経路木を構成する辺番号が入る


ダイクストラは定数倍で殺してくる問題が多いので適宜問題に沿うように変更しながら使うこと

**参考**
https://atcoder.jp/contests/abc252/submissions/31734684


https://zenn.dev/reputeless/books/standard-cpp-for-competitive-programming/viewer/library-tuple


## 挙動
負の重みがない場合、最短経路問題には部分構造最適性が成り立つ
- 頂点sから頂点tへの最短経路中に頂点rが含まれる場合、その最短経路は頂点sから頂点rの最短経路を含んでいる

ので、多分DPです。詳細はまだ未履修なので言及を避けておきます。（はよ勉強しろサボり魔さんがよ）

## 計算量
頂点の数をV、辺の数をEとしてO(ElogV)
- 最短経路の更新の回数がE回、優先度付きキューに出し入れがO(V)回


## verify
[ABC252-E](https://atcoder.jp/contests/abc252/submissions/32156905)

[AOJ GRL_1_A](https://onlinejudge.u-aizu.ac.jp/status/users/zawakasu/submissions/1/GRL_1_A/judge/6679172/C++17)
