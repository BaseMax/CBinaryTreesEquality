/**
 * 
 * @file BinaryTreesEquality.c
 * @author Max Base (maxbasecode@gmail.com)
 * @brief A C program to check if two binary trees are identical or not.
 * @version 0.1
 * @date 2023-02-03
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

/**
 * @brief Create a new node object
 * 
 * @param data
 * 
 * @return struct node* 
 */
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

/**
 * @brief Check if two binary trees are identical or not
 * 
 * @param a
 * @param b
 * 
 * @return int 
 */
int areIdentical(struct node *a, struct node *b)
{
    // Both trees are empty
    if (a == NULL && b == NULL) return 1;

    // Both of them are not empty
    if (a != NULL && b != NULL) {
        return (
                a->data == b->data &&
                areIdentical(a->left, b->left) &&
                areIdentical(a->right, b->right)
            );
    }

    // One of them is empty and the other is not
    return 0;
}
