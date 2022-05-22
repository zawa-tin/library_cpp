#include <vector>
class primeSieve {
private:
    vector<bool> container;
public:
    vector<int> primes;

    primeSieve(int n) {
        container = vector<bool>(n + 1, true);
        container[0] = false;
        if (n > 0) container[1] = true;
        for (int i = 2 ; i < n + 1 ; i++) {
            if (!container[i]) continue;
            primes.push_back(i);
            for (int j = i + i ; j < n + 1 ; j += i) container[j] = false;
        } 
    }

    bool isPrime(int x) {return container[x];}
};
