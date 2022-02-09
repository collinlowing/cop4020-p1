/***************************************************************
  Student Name: Collin Lowing
  File Name: HashTable.c
  Project 1

  store symbols and searchHashTable for matches
***************************************************************/

#include "HashTable.h"

struct Node *hashArray[SIZE];
struct Node *tempNode;
struct Node *symbol;

int hashCode(int key) {
    return key % SIZE;
}

struct Node *searchHashTable(int key) {
    //get the hash
    int hashIndex = hashCode(key);

    //move in array until an empty
    while (hashArray[hashIndex] != NULL) {

        if (hashArray[hashIndex]->key == key)
            return hashArray[hashIndex];

        //go to next cell
        hashIndex++;

        //wrap around the table
        hashIndex %= SIZE;
    }

    return NULL;
}

void insertHashTable(int key, int data) {

    struct Node *symbol = (struct Node *) malloc(sizeof(struct Node));
    symbol->data = data;
    symbol->key = key;

    //get the hash
    int hashIndex = hashCode(key);

    //move in array until an empty or deleted cell
    while (hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
        //go to next cell
        hashIndex++;

        //wrap around the table
        hashIndex %= SIZE;
    }

    hashArray[hashIndex] = symbol;
}

struct Node *deleteHashTable(struct Node *) {
    int key = symbol->key;

    //hash index with key
    int hashIndex = hashCode(key);

    //iterate through hash array until empty
    while (hashArray[hashIndex] != NULL) {

        if (hashArray[hashIndex]->key == key) {
            struct Node *tempNode = hashArray[hashIndex];

            //assign a dummy symbol at deleted position
            hashArray[hashIndex] = tempNode;
            return tempNode;
        }

        //go to next cell
        hashIndex++;

        //wrap around the table
        hashIndex %= SIZE;
    }

    return NULL;
}