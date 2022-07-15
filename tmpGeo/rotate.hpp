#include <cmath>

long double getRad(long double theta) {
    const long double pi = acos(-1);
    return t*pi / 180.0l;
}

pair<long double, long double> rotate(pair<long double, long double> p, int theta) {
    long double t = getRad((long double)theta);

}
