#include "blockchain/block.hpp"
#include "common/common.hpp"
#include "blockchain/blockchain.hpp"
#include <iostream>

int main() {

  std::cout << "Welcome to MiniBitcoin!" << std::endl;

  std::vector<std::string> genesisData = {
      "Genesis Block", "Initial Transaction", "Root Settings",
      "System Configuration"};
  Block genesisBlock(0, "0", "initialHash", "0", genesisData);

  // Add functionality to add blocks, interact with the blockchain, etc.
  // ...

  // Display the genesis block
  genesisBlock.toString();

  // You would typically have a loop here to accept user input and perform
  // actions on the blockchain For example: while (true) {
  //     std::cout << "Enter command: ";
  //     std::string command;
  //     std::cin >> command;
  //
  //     if (command == "exit") break;
  //     // Handle other commands...
  // }

  // Finish up any needed cleanup or saving state before exiting

  Blockchain myBlockchain(0);

  std::cout << "Exiting MiniBitcoin." << std::endl;

  return 0;
}
