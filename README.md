# MiniBitcoin

## Simplified Bitcoin Implementation

This documentation outlines `miniBitcoin`, a streamlined version of Bitcoin's core technology: the blockchain.

### Block Structure

A block, forming the backbone of the blockchain, includes:

- `index`: The sequential number indicating the block's position.
- `previousHash`: The unique identifier of the preceding block.
- `blockHash`: The block's own unique identifier.
- `nonce`: A one-time-use number, often randomly generated, critical for blockchain security.
- `data`: Content held by the block, such as transactions.

### Block Functionalities

The blockchain provides these essential methods for interaction:

- `getIndex()`: Retrieves the index of the block.
- `getPreviousHash()`: Fetches the hash of the preceding block.
- `getHash()`: Obtains the block's hash.
- `getData()`: Accesses the block's stored data.
- `toString()`: Displays the block attributes for review.

Next step is to create the Blockchain class, which will hold the blocks and provide the following methods:

- `getLatestBlock()`: Retrieves the latest block in the chain.