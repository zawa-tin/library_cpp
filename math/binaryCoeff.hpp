#include <vector>

template <typename T>
class binaryCoeff {
private:
    vector<vector<T>> table;
public:
    binaryCoeff(int maxn, int maxk) {
        table = vector<vector<T>>(maxn + 1, vector<T>(maxk + 1));
        table.front().front() = 1;
        for (int i = 1 ; i <= maxn ; i++) {
            table[i].front() = 1;
            for (int j = 1 ; j <= maxk ; j++) {
                table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
            }
        }
    }

    T nCk(int n, int k) {return table.at(n).at(k);}
};
