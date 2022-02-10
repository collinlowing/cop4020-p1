/***************************************************************
  Student Name: Collin Lowing
  File Name: main.c
  Project 1

  runs the rest of the program
***************************************************************/

#include <stdio.h>
#include "HashTable.h"
#include "LexicalAnalyzer.h"

int main(int argc, char** argv) {

    if(argc == 2)
    {
        char* filename = argv[1];
        printf("filename: %s\n", filename);

        file = fopen(filename, "r");
    }
    else
    {
        printf("program was expecting a command line argument");
        return 1;
    }

    // test
    HashItem *table[MAX_HASH_SIZE] = {0};
    insertItem(table, "Bart", "first");
    insertItem(table, "Lisa", "Second");
    insertItem(table, "Foo", "bar");
    deleteItem(table, "Lisa");
    printTable(table);

    //cleanup
    deleteTable(table);
    fclose(file);

    return 0;
}
