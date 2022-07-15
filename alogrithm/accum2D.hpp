#include <vector>
#include <utility>

namespace zawa {
    class accum2d {
    private:
        std::vector<std::vector<int>> container;
        std::vector<std::vector<int>> accum;
    public:
        accum2d(int h, int w) {
            container = std::vector<std::vector<int>>(h, std::vector<int>(w));
            accum = std::vector<std::vector<int>>(h + 1, std::vector<int>(w + 1));
        }

        int get(int y, int x) {
            return container[y][x];
        }
        
        void update(int y, int x, int v) {
            container[y][x] = v;
        }

        void build() {
            for (int i = 0 ; i < container.size() ; i++) {
                for (int j = 0 ; j < container[i].size() ; j++) {
                    accum[i + 1][j + 1] = accum[i][j] + accum[i + 1][j] - accum[i][j] + container[i][j];
                }
            }
        }

        int query(int y1, int x1, int y2, int x2) {
            return accum[y2][x2] - accum[y1][x2] - accum[y2][x1] + accum[y1][x1];
        }

        int query(std::pair<int, int> p1, std::pair<int, int> p2) {
            return query(p1.first, p1.second, p2.first, p2.second);
        }
    };
}
