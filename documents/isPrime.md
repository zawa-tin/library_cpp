<script type="text/javascript" async src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.7/MathJax.js?config=TeX-MML-AM_CHTML">
</script>
<script type="text/x-mathjax-config">
 MathJax.Hub.Config({
 tex2jax: {
 inlineMath: [['$', '$'] ],
 displayMath: [ ['$$','$$'], ["\\[","\\]"] ]
 }
 });
</script>

# 素数判定
***
非負整数nが素数かどうかを求めるアルゴリズム

愚直実装だと
```
i = 2 to n - 1:
    if nがiで割り切れる:
        return false
return true
```
だけど、これには無駄がある。

nが素数ではない時

$$ n = ab$$
を満たすa, bが存在するがそのうち片方は√n以下である。(感覚的にも分かりやすい)

なので√n以上の数までで割り切ることができなかったらそれは素数である

## メモ
負の数を入れたら必ずfalseを返す実装になっています。-1倍しません(不親切?)

## 計算量
O(√n)

## verify
[AOJ ALDS 1-C](https://onlinejudge.u-aizu.ac.jp/status/users/zawakasu/submissions/1/ALDS1_1_C/judge/6639048/C++11)
