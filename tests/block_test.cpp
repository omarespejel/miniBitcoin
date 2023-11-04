#include "gtest/gtest.h"
#include "blockchain/block.hpp"

TEST(BlockTest, Constructor) {
    std::vector<std::string> data = {"data1", "data2"};
    Block block(1, "0", "hash", "nonce", data);

    EXPECT_EQ(block.getIndex(), 1);
    EXPECT_EQ(block.getPreviousHash(), "0");
    EXPECT_EQ(block.getHash(), "hash");
    EXPECT_EQ(block.getNonce(), "nonce");
    EXPECT_EQ(block.getData(), data);
}

// Add more tests for each method in your Block class
