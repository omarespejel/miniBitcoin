#include "blockchain/block.hpp"

// Constructor
Block::Block(int index, std::string prevHash, std::string hash, std::string nonce, std::vector<std::string> data) {
    printf("\nInitializing Block: %d ---- Hash: %s \n", index, hash.c_str());
    this->index = index;
    this->prevHash = prevHash;
    this->hash = hash;
    this->nonce = nonce;
    this->data = data;
} 

int Block::getIndex(void) {
    return this->index;
}

std::string Block::getPreviousHash(void) {
    return this->prevHash;
}

std::string Block::getHash(void) {
    return this->hash;
}

std::string Block::getNonce(void) {
    return this->nonce;
}

std::vector<std::string> Block::getData(void) {
    return this->data;
}

void Block::toString(void) {
    std::string dataString;
    for (const auto& piece_of_data : data) {
        dataString += piece_of_data + ", ";
    }
    // Remove the trailing ", " from the dataString
    if (!dataString.empty()) {
        dataString.pop_back(); // Remove space
        dataString.pop_back(); // Remove comma
    }

    printf("\n-------------------------------\n");
    printf("Block %d\nHash: %s\nPrevious Hash: %s\nContents: %s",
        index, hash.c_str(), prevHash.c_str(), dataString.c_str()); 
    printf("\n-------------------------------\n");
}


// Path: src/blockchain/block.cpp
// Compare this snippet from include/blockchain/block.hpp:
// #ifndef BLOCKCHAIN_H
// #define BLOCKCHAIN_H
// 