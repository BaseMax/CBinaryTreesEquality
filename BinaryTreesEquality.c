/**
 * 
 * @file BinaryTreesEquality.c
 * @author Max Base (maxbasecode@gmail.com)
 * @brief A C program to check if two binary trees are identical or not. (Easily check equality of two binary trees)
 * @version 0.1
 * @date 2023-02-03
 * @copyright Copyright (c) 2023
 * 
 */

#include "BinaryTreesEquality.h"

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

int main(int argc, char** argv)
{
    // Let us create trees
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

    return 0;
}
