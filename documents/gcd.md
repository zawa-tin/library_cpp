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

# ユークリッドの互除法
***

世界最古のアルゴリズムの一つらしい。ぎょえ〜〜

二つの非負整数の最大公約数を求めるアルゴリズム

$$ a = bp + q $$
として
$$ gcd(b, q) $$を考えると
$$ a = (hoge \cdot gcd(b, q))p\ +\ (hogee\cdot gcd(b, q)) $$
$$ a = gcd(b, q) \cdot (hoge \cdot p\ +\ hogee) $$
で
aはgcd(b, q)を約数に持つ(gcd(b, q)はaとbの公約数)。公約数の最大がgcdなので
$$ gcd(a, b)\ \ge\ gcd(b, r) $$

$$ r = a - bp = gcd(a, b) * (hogeee - hoge \cdot p) $$
なのでrはgcd(a, b)を約数に持つ。同様に
$$ gcd(b, q)\ \ge\ gcd(a, b) $$

よって
$$ gcd(a, b)\ =\ gcd(b, r) $$
でmin(a, b) >= r (= a % b)なのでこの変形を繰り返すといつかr = 0となり、gcdが求まる。

## メモ
自作関数を使うよりは__gcd()を使おうという気持ち

拡張ユークリッドというポケモンもいる

## 計算量
O(log(min(a, b)))
a > b, b > rで(b > aでも一回目でひっくり返ってgcd(b, a)を計算することになる)
でa = bp + rを考えると
$$ r < \frac{a}{2} $$
が成り立つ(pの値を考えるとなんとなくそうと分かる)
のでこれを繰り返すと
$$ r_2\ <\ \frac{r}{2} $$

## verify
[AOJ ALDS-1-B](https://onlinejudge.u-aizu.ac.jp/status/users/zawakasu/submissions/1/ALDS1_1_B/judge/6638064/C++11)
