# C Binary-Trees Equality

This is a C implementation of the Binary-Trees Equality program to check two binary trees are identical or not.

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

## How to run

```bash
$ gcc BinaryTreesEquality.c -o BinaryTreesEquality
$ ./BinaryTreesEquality
```

## Example

```c
// 1st tree
struct node *root1 = newNode(1);
root1->left = newNode(2);
root1->right = newNode(3);
root1->left->left = newNode(4);
root1->left->right = newNode(5);

// 2nd tree
struct node *root2 = newNode(1);
root2->left = newNode(2);
root2->right = newNode(3);
root2->left->left = newNode(4);
root2->left->right = newNode(5);

if (areIdentical(root1, root2))
    printf("Both trees are identical");
else
    printf("Trees are not identical");
```

Copyright (c) 2023, Max Base
