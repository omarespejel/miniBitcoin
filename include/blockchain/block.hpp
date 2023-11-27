#ifndef BLOCK_H
#define BLOCK_H

#include <iostream>
#include <string>
#include <vector>

class Block {
public:
  Block(int index, std::string prevHash, std::string hash, std::string nonce,
        std::vector<std::string> data);
  int getIndex(void);
  std::string getPreviousHash(void);
  std::string getHash(void);
  std::string getNonce(void);
  std::vector<std::string> getData(void);

  void toString(void);

private:
  int index;
  std::string prevHash;
  std::string hash;
  std::string nonce;
  std::vector<std::string> data;
};

#endif // BLOCK_H
