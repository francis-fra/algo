#include <stdio.h>
#include <stdlib.h>
#include "btree.h"


int main(void) {

    btree *b = create_bnode(NULL, 4);
    btree *bt = create_bnode(NULL, 24);

    // save to free it later
    /*
    btree *b_copy = b;
    free(b_copy);
    b = bt;
    */

    copy_tree(b, bt);   // NO Change!!
    copy_btree(&b, bt);   // this is ok now....

    traverse_btree(b, &print);
    printf("Inserting item...\n");

    insert_btree(&b, NULL, 10);
    insert_btree(&b, NULL, 1);
    insert_btree(&b, NULL, 100);

    /*
    insert_btree2(b, NULL, 10);
    insert_btree2(b, NULL, 1);
    insert_btree2(b, NULL, 100);
    */

    traverse_btree(b, &print);

    printf("Doubling item...\n");
    traverse_btree(b, &dble);
    traverse_btree(b, &print);
    printf("Minimum = %d\n", minTreeVal(b));

    itemType item = 200;
    printf("Searching item %d...\n", item);
    btree *result = search_tree(b, item);

    if (result == NULL) {
      printf("Not found..\n");
    } else {
      printf("Found!\n");
    }

    // print content again
    printf("Copying tree...\n");
    copy_btree(&bt, b);
    traverse_btree(bt, &print);

    free(b);

    return 0;
}
