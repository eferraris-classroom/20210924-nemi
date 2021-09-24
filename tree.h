//
// Created by bauti on 9/24/2021.
//

#ifndef BASE_PROJECT_TREE_H
#define BASE_PROJECT_TREE_H

typedef struct root {
    int value;
    struct root * left;
    struct root * right;
} Root;

Root* newRoot(int value);
void insertInTree(Root** root, Root* n);
void inorden(Root* root);
void preorden(Root* root);
void posorden(Root* root);

#endif //BASE_PROJECT_TREE_H
