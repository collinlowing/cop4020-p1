/***************************************************************
  Student Name: Collin Lowing
  File Name: main.c
  Project 1

  runs the rest of the program
***************************************************************/

#include <stdio.h>
#include "HashTable.h"

int main(int argc, char** argv) {

    printf("You have entered %d arguments\n", argc - 1);

    for (int i = 1; i < argc; i++)
        printf("%s\n", argv[i]);

    HashItem *table[MAX_HASH_SIZE] = {0};

    insertItem(table, "Bart", "first");
    insertItem(table, "Lisa", "Second");
    insertItem(table, "Foo", "bar");
    deleteItem(table, "Lisa");
    printTable(table);
    deleteTable(table);

    return 0;
}
