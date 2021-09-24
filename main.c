#include <stdio.h>
#include "tree.h"

int main() {
    Root* root = newRoot(1);
    insertInTree(&root, newRoot(10));
    insertInTree(&root, newRoot(7));
    insertInTree(&root, newRoot(14));
    preorden(root);
    printf("\n");
    inorden(root);
    printf("\n");
    posorden(root);
    printf("\n");

    clearTree(root);

    return 0;
}
