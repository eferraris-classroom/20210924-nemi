//
// Created by bauti on 9/24/2021.
//

#ifndef BASE_PROJECT_TREE_H
#define BASE_PROJECT_TREE_H

typedef struct node {
    int value;
    struct node * left;
    struct node * right;
} Node;

Node* newNode(int value);
void insertInTree(Node** root, Node* n);
void inorden(Node* root);
void preorden(Node* root);
void posorden(Node* root);

#endif //BASE_PROJECT_TREE_H
