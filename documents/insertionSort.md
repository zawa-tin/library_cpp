# 挿入ソート
***
トランプの大富豪とか七並べでやりがちなやつ
* まだソートしていない列の端の数字をソート済の列の中のあるべきところに挿入することでソート列を押し上げる

## 計算量
配列の要素数をNとしてO(N^2)
ただし、すでにソートされている列に対しては線形時間で完了する
* ~そもそもその場合は関数を利用する必要がないけど~

## verify
[AOJ_ALDS 1_A](https://onlinejudge.u-aizu.ac.jp/status/users/zawakasu/submissions/1/ALDS1_1_A/judge/6594080/C++11)