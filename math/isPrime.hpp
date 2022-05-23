bool isPrime(long long a) {
    if (a < 2) return false;
    if (a > 2 and a % 2 == 0) return false;
    for (int i = 3 ; i * i <= a ; i += 2) if (a % i == 0) return false;
    return true;
}
