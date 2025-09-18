#include <gtest/gtest.h>
#include <cmath>
#include <cstdlib> 
#include "../include/closest_pair.h"

TEST(ClosestPairTest, UpperLimit10) {
    int m, n;
    closest_pair_tonum(10, m, n);
    
    EXPECT_EQ(m, 5);
    EXPECT_EQ(n, 4);
    EXPECT_EQ(m + n, 9);
    EXPECT_EQ(m - n, 1);
}

TEST(ClosestPairTest, UpperLimit30) {
    int m, n;
    closest_pair_tonum(30, m, n);
    
    EXPECT_EQ(m, 29);
    EXPECT_EQ(n, 20);
    EXPECT_EQ(m + n, 49);
    EXPECT_EQ(m - n, 9);
}

TEST(ClosestPairTest, UpperLimit50) {
    int m, n;
    closest_pair_tonum(50, m, n);
    
    EXPECT_EQ(m, 45);
    EXPECT_EQ(n, 36);
    EXPECT_EQ(m + n, 81);
    EXPECT_EQ(m - n, 9);
}

TEST(ClosestPairTest, UpperLimit20) {
    int m, n;
    closest_pair_tonum(20, m, n);

    int sum = m + n;
    int diff = m - n;
    
    double sum_sqrt = std::sqrt(sum);
    double diff_sqrt = std::sqrt(diff);
    
    EXPECT_EQ(std::floor(sum_sqrt), sum_sqrt);
    EXPECT_EQ(std::floor(diff_sqrt), diff_sqrt);
    EXPECT_GT(m, n);
    EXPECT_GT(20, m);
}

TEST(ClosestPairTest, UpperLimit100) {
    int m, n;
    closest_pair_tonum(100, m, n);
    int sum = m + n;
    int diff = m - n;
    
    EXPECT_EQ(std::floor(std::sqrt(sum)), std::sqrt(sum));
    EXPECT_EQ(std::floor(std::sqrt(diff)), std::sqrt(diff));
    EXPECT_GT(m, n);
    EXPECT_GT(100, m);
    EXPECT_GT(n, 0);
}

TEST(ClosestPairTest, EdgeCaseUpperLimit2) {
    int m, n;
    closest_pair_tonum(2, m, n);
    
    EXPECT_EQ(m, 0);
    EXPECT_EQ(n, 0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}