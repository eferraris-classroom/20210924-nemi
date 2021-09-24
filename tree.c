//
// Created by bauti on 9/24/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

Root *newRoot(int value) {
    Root* aux = (Root*) malloc(sizeof (Root));
    if (aux == NULL) {
        printf("Not enough memory\n");
        exit(-1);
    }
    aux->value = value;
    aux->left = NULL;
    aux->right = NULL;
    return aux;
}

void insertInTree(Root **root, Root *n) {
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

void inorden(Root *root) {
    if (root != NULL){
        preorden(root->left);
        printf("%d, ", root->value);
        preorden(root->right);
    }
}

void preorden(Root *root) {
    if (root != NULL){
        printf("%d, ", root->value);
        preorden(root->left);
        preorden(root->right);
    }
}

void posorden(Root *root) {
    if (root != NULL){
        preorden(root->left);
        preorden(root->right);
        printf("%d, ", root->value);
    }
}
