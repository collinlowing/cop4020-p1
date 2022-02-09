/***************************************************************
  Student Name: Collin Lowing
  File Name: main.c
  Project 1

  runs the rest of the program
***************************************************************/

#include <stdio.h>
#include "HashTable.h"

int main() {
    HashItem *table[MAX_HASH_SIZE] = {0};

    insertItem(table, "Bart", "first");
    insertItem(table, "Lisa", "Second");
    insertItem(table, "Foo", "bar");
    deleteItem(table, "Lisa");
    printTable(table);
    deleteTable(table);
    return 0;
}
