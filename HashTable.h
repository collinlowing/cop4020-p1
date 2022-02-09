/***************************************************************
  Student Name: Collin Lowing
  File Name: HashTable.h
  Project 1

  store symbols and searchHashTable for matches
***************************************************************/

#ifndef COP4020_P1_HASHTABLE_H
#define COP4020_P1_HASHTABLE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 20

struct Node {
    int data;
    int key;
    struct Node *next;
};

extern struct Node *hashArray[SIZE];
extern struct Node *tempNode;
extern struct Node *symbol;

int hashCode(int);
struct Node *searchHashTable(int);
void insertHashTable(int, int);
struct Node *deleteHashTable(struct Node*);

#endif //COP4020_P1_HASHTABLE_H
