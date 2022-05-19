#pragma once
#include <vector>
#include <functional>
using namespace std;
// clang-format off
template <typename T>
class seg_tree {
    using F = function<T(T, T)>;
private:
    int n;
    T elem;
    vector<T> container;
    F func; 

    void set_n(int n) {
        this->n = 1;
        while(this->n < n) this->n <<= 1;
    }

    void build(vector<T>& input, int elem) {
        container = vector<T>(2 * n, elem);
        this->elem = elem;
        for (int i = 0 ; i < input.size() ; i++) container[n + i] = input[i];
        for (int i = n - 1 ; i >= 1 ; i--) container[i] = func(container[2 * i], container[2 * i + 1]);
    }

    T rec(int index, int l, int r, int a, int b) {
        // 完全に内部に含まれている場合
        if (l <= a and b <= r) return container[index];
        // 完全に外部の時
        if (b <= l or r <= a) return elem;
        // またがっている時
        return func(rec(2 * index, l, r, a, (a + b) / 2), rec(2 * index + 1, l, r, (a + b) / 2, b));
    }

public:
    int getn() {return n;}
    T get(int index) {return container[index];}

    seg_tree(vector<T>& input) {
        set_n(input.size());
        build(input, 0);
    }

    seg_tree(vector<T>& input, int elem) {
        set_n(input.size());
        func = [](T a, T b){return a + b;};
        build(input, elem);
    }

    seg_tree(vector<T>& input, F func, int elem) {
       set_n(input.size());
       this->func = func;
       build(input, elem);
    }

    void update(int index, int value) {
        index += n;
        container[index] = value;
        while(index > 1) {
            index /= 2;
            container[index] = func(container[2 * index], container[2 * index + 1]);
        }
    }
    
    // 半開区間
    T query(int l, int r) {
        return rec(1, l + 1, r + 1, 1, n + 1);        
    }

    // デバッグプリント
    void print() {
        for (auto& x : container) cout << x << " ";
        cout << endl;
    }

};
