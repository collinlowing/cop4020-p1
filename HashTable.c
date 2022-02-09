/***************************************************************
  Student Name: Collin Lowing
  File Name: HashTable.c
  Project 1

  store symbols and searchHashTable for matches
***************************************************************/

#include "HashTable.h"

// generate hash code from key char pointer
unsigned int getHashCode(const char *key) {
    unsigned int sum = 0;

    // convert char pointer to unsigned int
    for (int i = 0; key[i]; i++) {
        sum += (unsigned char)key[i] * (i + 1);
    }

    return sum % MAX_HASH_SIZE;
}

// frees up memory for item pointer and containing pointers
void freeItem(HashItem *item) {
    free(item->key);
    free(item->value);
    free(item);
}

// deletes an item from the hash table
void deleteItem(HashItem *table[], const char *key) {
    HashItem **tableLink = &table[getHashCode(key)];

    while (*tableLink) {
        HashItem *tmp = *tableLink;
        if (strcmp(tmp->key, key) == 0) {
            *tableLink = tmp->next;  // unlink the list node
            freeItem(tmp);
            break;
        } else {
            tableLink = &(*tableLink)->next;
        }
    }
}

// deletes everything in the hash table and the table pointer itself
void deleteTable(HashItem *table[])
{
    // iterate through every index of the hash table
    for(int i; i < MAX_HASH_SIZE; i++)
    {
        // if table item is not empty, delete it
        if(table[i] != NULL)
        {
            freeItem(table[i]);
        }
    }
}

// inserts an item into the hash table
void insertItem(HashItem *table[], const char *key, const char *value) {
    unsigned int code = getHashCode(key);
    HashItem *item = malloc(sizeof(*item));
    if (item != NULL) {
        item->key = strdup(key);
        item->value = strdup(value);
        item->next = table[code];
        table[code] = item;
    }
}

// prints hash table
void printTable(HashItem *table[]) {
    for (int i = 0; i < MAX_HASH_SIZE; i++) {
        for (HashItem *tmp = table[i]; tmp; tmp = tmp->next) {
            printf("key: %s -> value: %s\n", tmp->key, tmp->value);
        }
    }
}