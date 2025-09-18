#include <cmath>
#include "../include/closest_pair.h"

void closest_pair_tonum(int upper_limit, int& m, int& n) {
    for (m = upper_limit - 1; m > 0; m--) {
        for (n = m - 1; n > 0; n--) {
            int sum = m + n;
            int diff = m - n;
            
            double sum_sqrt = std::sqrt(sum);
            double diff_sqrt = std::sqrt(diff);
            
            if (std::floor(sum_sqrt) == sum_sqrt && std::floor(diff_sqrt) == diff_sqrt) {
                return;
            }
        }
    }
    m = 0;
    n = 0;
}