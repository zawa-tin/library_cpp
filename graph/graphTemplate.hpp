struct edge {
    int from;
    int to;
    long long cost;
    bool operator<(const edge& other) const {
        return cost < other.cost;
    }
    bool operator<=(const edge& other) const {
        return cost <= other.cost;
    }
    bool operator>(const edge& other) const {
        return cost > other.cost;
    }
    bool operator>=(cost edge& other) const {
        return cost >= other.cost;
    }
};
