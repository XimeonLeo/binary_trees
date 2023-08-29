# Binary Trees in C

## General
This repository contains an implementation of binary trees in C. It covers various aspects of binary trees, including definitions, differences, time complexity, and properties.

## What is a Binary Tree?
A binary tree is a hierarchical structure composed of nodes, where each node has at most two children: a left child and a right child. The topmost node is called the root.

## Binary Tree vs. Binary Search Tree (BST)
While a binary tree allows any arrangement of nodes, a Binary Search Tree (BST) has the property that for each node, all nodes in its left subtree have values less than the node's value, and all nodes in its right subtree have values greater than the node's value.

## Time Complexity Gain compared to Linked Lists
Binary trees can offer significant time complexity improvements over linked lists for certain operations. Searching, insertion, and deletion in a balanced binary search tree have a time complexity of O(log n), whereas linked lists have a linear time complexity of O(n) for these operations.

## Binary Tree Terminology
- Depth: The depth of a node is the number of edges from the root to that node.
- Height: The height of a node is the number of edges on the longest path from that node to a leaf.
- Size: The size of a binary tree is the total number of nodes it contains.

## Traversal Methods
There are several ways to traverse a binary tree:
- Inorder: Left subtree, root, right subtree.
- Preorder: Root, left subtree, right subtree.
- Postorder: Left subtree, right subtree, root.
- Level Order: Visit nodes level by level, from left to right.

## Types of Binary Trees
- Complete Binary Tree: A binary tree in which all levels are completely filled, except possibly the last level, which is filled from left to right.
- Full Binary Tree: A binary tree in which every node has either 0 or 2 children.
- Perfect Binary Tree: A binary tree in which all interior nodes have exactly 2 children and all leaf nodes are at the same level.
- Balanced Binary Tree: A binary tree in which the depth of the left and right subtrees of every node differ by at most 1.

## Data Structures and Types
### Basic Binary Tree
```
c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
## Binary Search Tree (BST)
typedef struct binary_tree_s bst_t;

## AVL Tree
typedef struct binary_tree_s avl_t;

## Max Binary Heap
typedef struct binary_tree_s heap_t;


Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.

Feel free to explore the code and documentation to better understand binary trees and their properties.


