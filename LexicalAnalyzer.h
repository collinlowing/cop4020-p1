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

#define DONE 200
#define NOT_FOUND 404

HashItem *symbolTable[MAX_HASH_SIZE] = {0};

char lookup(int lexeme);

_Noreturn int lexan();


#endif //COP4020_P1_LEXICALANALYZER_H
