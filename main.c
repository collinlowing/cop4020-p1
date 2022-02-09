/***************************************************************
  Student Name: Collin Lowing
  File Name: main.c
  Project 1

  runs the rest of the program
***************************************************************/

#include <stdio.h>
#include "HashTable.h"

int main() {
    tempNode = (struct Node*) malloc(sizeof(struct Node));
    tempNode->data = -1;
    tempNode->key = -1;

    insertHashTable(1, 20);
    insertHashTable(2, 70);
    insertHashTable(42, 80);
    insertHashTable(4, 25);
    insertHashTable(12, 44);
    insertHashTable(14, 32);
    insertHashTable(17, 11);
    insertHashTable(13, 78);
    insertHashTable(37, 97);

    symbol = searchHashTable(37);

    if(symbol != NULL) {
        printf("Element found: %d\n", symbol->data);
    } else {
        printf("Element not found\n");
    }

    deleteHashTable(symbol);
    symbol = searchHashTable(37);

    if(symbol != NULL) {
        printf("Element found: %d\n", symbol->key);
    } else {
        printf("Element not found\n");
    }
}
