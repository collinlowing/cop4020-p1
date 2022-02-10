/***************************************************************
  Student Name: Collin Lowing
  File Name: RDParser.h
  Project 1

  perform lexical analysis on a character string
***************************************************************/

#ifndef COP4020_P1_RDPARSER_H
#define COP4020_P1_RDPARSER_H

#include "LexicalAnalyzer.h"
#include<stdio.h>
#include<stdlib.h>

char lookahead;

int assignStatement();
void match(char token);
void factor();
void expression();
void term();

#endif //COP4020_P1_RDPARSER_H
