#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "blockchain/block.hpp"

class Blockchain {
public:
  Blockchain(int genesis);
  Block getBlock(int index);
  int addBlock(int Index, std::string prevHash, std::string hash,
               std::string nonce, std::vector<std::string> &merkle);

  void toString(void);
  int getNumBlocks(void);
  std::string getLatestBlockHash(void);

private:
  std::vector<std::unique_ptr<Block>>
      blockchain; // vector that is the blockchain
};

#endif // BLOCKCHAIN_H
