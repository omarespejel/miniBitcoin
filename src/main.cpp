#include <iostream>
#include "blockchain/block.hpp"
// Include other necessary headers...

int main() {
    // Initialization of blockchain would go here
    // For example, creating the genesis block
    std::vector<std::string> genesisData = {"Genesis Block"};
    Block genesisBlock(0, "0", "initialHash", "0", genesisData);

    std::cout << "Welcome to MiniBitcoin!" << std::endl;
    
    // Add functionality to add blocks, interact with the blockchain, etc.
    // ...

    // Display the genesis block
    genesisBlock.toString();

    // You would typically have a loop here to accept user input and perform actions on the blockchain
    // For example:
    // while (true) {
    //     std::cout << "Enter command: ";
    //     std::string command;
    //     std::cin >> command;
    //
    //     if (command == "exit") break;
    //     // Handle other commands...
    // }

    // Finish up any needed cleanup or saving state before exiting
    std::cout << "Exiting MiniBitcoin." << std::endl;

    return 0;
}
