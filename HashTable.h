/***************************************************************
  Student Name: Collin Lowing
  File Name: HashTable.h
  Project 1

  store symbols and searchHashTable for matches
***************************************************************/

#ifndef COP4020_P1_HASHTABLE_H
#define COP4020_P1_HASHTABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HASH_SIZE  50

// the object that is being stored in hashtable
typedef struct HashItem {
    char *key;
    char *value;
    struct HashItem *next;
} HashItem;

unsigned int getHashCode(const char *key);
void freeItem(HashItem *item);
void deleteItem(HashItem *table[], const char *key);
void deleteTable(HashItem *table[]);
void insertItem(HashItem *table[], const char *key, const char *value);
void printTable(HashItem *table[]);

#endif //COP4020_P1_HASHTABLE_H
