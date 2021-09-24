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
