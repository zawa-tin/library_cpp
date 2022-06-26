# 二項係数
---

パスカルの三角形を用いた素朴な二項係数のテーブル作成のクラス。


コードはこちらを参考にしています。
https://algo-logic.info/pascal-triangle/


nCkの取得にはatを使っているので、範囲外参照はエラーを返します


## 使い方
binaryCoeff<type> name(int n, int k)
でnCkの最大値までを拾ったテーブルを作ります。（ACLのmodintも使えます）
    
    
name.nCk(n, k)でお好きな二項係数を取得できます。
    
    
## 計算量
前準備にO(NK)、取得にO(1)
    
## verify
[ARC143-B](https://atcoder.jp/contests/arc143/submissions/32785968)

    
[ABC254-B](https://atcoder.jp/contests/abc254/submissions/32785891)
