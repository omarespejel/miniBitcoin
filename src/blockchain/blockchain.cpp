#include "blockchain/blockchain.hpp"
#include "common/common.hpp"
#include <string>
#include <vector>

// Constructor
Blockchain::Blockchain(int genesis) {
  if (genesis == 0) {
    std::vector<std::string> v;
    v.push_back("Genesis Block!");

    // Assuming the findHash function returns a pair of strings where the first
    // is the hash and the second is the nonce
    auto hash_nonce_pair = findHash(0, "00000000000000", v);

    // Create the genesis block and add it to the blockchain
    this->blockchain.push_back(std::make_unique<Block>(
        0, "00000000000000", hash_nonce_pair.first, hash_nonce_pair.second, v));

    std::cout << "Created blockchain with Genesis Block!\n";
  }
}