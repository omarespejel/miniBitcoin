#ifndef COMMON_H
#define COMMON_H

#include <string>
#include <utility>

std::string sha256(const std::string &input);

std::string getMerkleRoot(const std::vector<std::string> &merkle);

std::pair<std::string, std::string> findHash(int index, std::string prevHash,
                                             std::vector<std::string> &merkle);

#endif // COMMON_H