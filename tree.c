//
// Created by bauti on 9/24/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

Node *newNode(int value) {
    Node* aux = (Node*) malloc(sizeof (Node));
    if (aux == NULL) {
        printf("Not enough memory\n");
        exit(-1);
    }
    aux->value = value;
    aux->left = NULL;
    aux->right = NULL;
    return aux;
}

void insertInTree(Node **root, Node *n) {
    if (*root == NULL){
        *root = n;
    } else {
        if (n->value > (*root)->value) {
            insertInTree(&((*root)->right), n);
        } else if (n->value < (*root)->value) {
            insertInTree(&((*root)->left), n);
        } else {
            printf("%d is already in the tree\n", n->value);
        }
    }
}

void inorden(Node *root) {
    if (root != NULL){
        preorden(root->left);
        printf("%d, ", root->value);
        preorden(root->right);
    }
}

void preorden(Node *root) {
    if (root != NULL){
        printf("%d, ", root->value);
        preorden(root->left);
        preorden(root->right);
    }
}

void posorden(Node *root) {
    if (root != NULL){
        preorden(root->left);
        preorden(root->right);
        printf("%d, ", root->value);
    }
}
