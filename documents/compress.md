# 座標圧縮
***

大きい小さいの関係だけを残して配列の要素の大きさを要素の種類数に抑え込む

座圧なんていったりもする。

これをするとA_i <= 10^9の制約でもバケット(頻度配列なんて言ったりする？)を作れていい感じに悪さできそう（と妄想している。自分が実戦で使ったことはまだない）

## 挙動
[けんちょんさんの記事](https://drken1215.hatenablog.com/entry/2021/08/09/235400)を参考にしました。

配列をコピーしてsort->unique->eraseで配列をユニーク（同じ要素が存在しない状態）にする
- sortしないとuniqueが上手く行かないことに注意

そこで元の配列の値についてこのユニーク配列上でlower_boundすると「元の値が何番目に大きいか」という情報を得ることができるので、それを新しい値にする

## 使い方
コンストラクタに配列をぶちこんでください（コンテナをコピーします）

template引数を忘れないでください（一敗）


## 計算量
配列の要素数をNとしてO(NlogN)
- ソートがボトルネック

## verify
[ABC213-C](https://atcoder.jp/contests/abc213/submissions/32118509)