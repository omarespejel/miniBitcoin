# miniBitcoin

Minimalistic implementation of Bitcoin

We begin with the creation of the most fudnamental part of a blockchain: the block.

Each block is initialized with the attributes: index: The block's position in the blockchain.
previousHash: The hash of the previous block in the blockchain.
blockHash: The block's own hash.
nonce: A nonce is an arbitrary number used in blockchain that may only be used once. It's usually random or pseudo-random.
data: A vector storing the data (could be transactions or other info) of the block.

Also the blockchain have certain public member functions: getIndex(): Returns the block's index.
getPreviousHash(): Returns the previous block's hash.
getHash(): Returns the block's own hash.
getData(): Returns the block's data.
toString(): Prints the block's attributes in a formatted manner.
toJSON(): Converts the block's data into JSON format and returns it.

We add certain functions to the Block class just to get the values of the attributes of the block. You can retrieve details about the block using the various getters (getIndex(), getPreviousHash(), etc.).
The toString() method can be used for debugging purposes as it prints out the block's details.
The toJSON() method can be especially useful if you want to export or save the block's data in a JSON format, maybe to a file or a network request.