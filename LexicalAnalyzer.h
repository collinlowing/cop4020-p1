/***************************************************************
  Student Name: Collin Lowing
  File Name: LexicalAnalyzer.h
  Project 1

  perform lexical analysis on a character string
***************************************************************/

#ifndef COP4020_P1_LEXICALANALYZER_H
#define COP4020_P1_LEXICALANALYZER_H

#include <ctype.h>
#include <stdbool.h>
#include "HashTable.h"

#define ID 300
#define NUM 301
#define BEGIN 400
#define DONE 401
#define NOT_FOUND -1

extern int numLines;
extern int numLexeme;
extern FILE * file;
extern char ch;

HashItem *symbolTable[MAX_HASH_SIZE] = {0};

char lookup(int lexeme);

int lexan();


#endif //COP4020_P1_LEXICALANALYZER_H
