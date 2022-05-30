# エラトステネスの篩
***
0から特定の数までの素数判定を行うアルゴリズム

2~Nまでの倍数をfalseにして篩落とすことで最終的に素数が残るだろうというやつ

## 使い方
コンストラクタを呼び出すと篩落としが発生する

素数の数はsieve.primes.size()やlower_bound(all(sieve.primes))等を使うと得れる

isPrimeメソッドでN以下の整数一つが素数かどうかをbool値で返す

## 計算量

O(Nlog(logN))
*素数の逆数和がlog(logN)の早さで発散するかららしい(本当ですか)

## verify

[アルゴ式/整数論的アルゴリズム/2章/Q3](https://algo-method.com/submissions/446222)