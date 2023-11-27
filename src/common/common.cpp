#include "common/common.hpp"
#include <iomanip>
#include <openssl/sha.h>
#include <sstream>

std::string sha256(const std::string &input) {
  unsigned char hash[SHA256_DIGEST_LENGTH];
  SHA256(reinterpret_cast<const unsigned char *>(input.c_str()), input.size(),
         hash);

  std::stringstream hexStream;
  for (unsigned char i : hash) {
    hexStream << std::hex << std::setw(2) << std::setfill('0')
              << static_cast<int>(i);
  }
  return hexStream.str();
}

std::string getMerkleRoot(const std::vector<std::string> &merkle) {
  if (merkle.empty())
    return "";

  std::vector<std::string> treeLayer = merkle;

  while (treeLayer.size() > 1) {
    if (treeLayer.size() % 2 == 1) {
      treeLayer.push_back(treeLayer.back());
    }

    std::vector<std::string> newLayer;
    for (size_t i = 0; i < treeLayer.size(); i += 2) {
      std::string concatData = treeLayer[i] + treeLayer[i + 1];
      newLayer.push_back(sha256(concatData));
    }
    treeLayer = newLayer;
  }

  return treeLayer[0];
}

std::pair<std::string, std::string> findHash(int index, std::string prevHash,
                                             std::vector<std::string> &merkle) {
  std::string header = std::to_string(index) + prevHash + getMerkleRoot(merkle);

  for (unsigned int nonce = 0; nonce < 100000; ++nonce) {
    std::string hashAttempt = sha256(header + std::to_string(nonce));
    if (hashAttempt.substr(0, 2) == "00") {
      return {hashAttempt, std::to_string(nonce)};
    }
  }

  return {"fail", "fail"};
}