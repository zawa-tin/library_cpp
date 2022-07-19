# 二次元累積和
*** 
平面での累積和です。

# 使い方
accum2d(int h, int w) 平面のサイズを入れてください。コンテナを初期化します


update(int y, int x, int v) (y, x)マスをvにします。静的なので、build前に全てのupdateをする必要があります


build()
累積和を構成します。


query(int y1, int x1, int y2, int x2)
(y1, x1) <= (y, x) < (y2, x2)の値の和を返します。


int型で宣言されているので、long longに書き直す必要があるかもしれません

# 計算量
buildにO(HW)


queryにO(1)
