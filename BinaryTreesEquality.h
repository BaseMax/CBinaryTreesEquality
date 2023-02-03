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
struct node *newNode(int data);

/**
 * @brief Check if two binary trees are identical or not
 * 
 * @param a
 * @param b
 * 
 * @return int 
 */
int areIdentical(struct node *a, struct node *b);
