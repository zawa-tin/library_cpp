# 素集合データ構造(dsu)
いくつかの集合を管理することができるデータ構造
* 集合の合体(merge)
* 二要素が同じ集合に属しているか(same)

というクエリに答えることができる

どの集合も互いに素(共通部分が空集合)であることが前提である

集合を木として管理している
* mergeクエリでは片方の木の根をもう片方の根にくっつける
* sameクエリでは二要素が属している木の根を確認する

一度辿った頂点を根の直接の子として付け替える操作を逐次行うことで、sameクエリを高速で動かせるようにしている(縮約)

mergeクエリでは木の高さが小さい方を大きい方にくっつける様にすることでデータの移動を小さくする
* 重み付き合併戦略(マージテク)と呼ばれ、データ構造の連結時には有効な戦略である


## メモ

参考(ほぼ一緒) 蟻本

重み付きUnion-Findというポケモンも存在する


## 計算量
かなりはやい！！！(アッカーマン関数の逆関数ってやつらしいですが、未履修なので追記待ちってことにします。logよりはやい・・・？)

## verify
[AOJ DSL-1-A](https://onlinejudge.u-aizu.ac.jp/status/users/zawakasu/submissions/1/DSL_1_A/judge/6637446/C++11)