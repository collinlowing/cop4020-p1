/***************************************************************
  Student Name: Collin Lowing
  File Name: LexicalAnalyzer.c
  Project 1

  perform lexical analysis on a character string
***************************************************************/

#include "LexicalAnalyzer.h"

int numLines = 0;
int numLexeme;
FILE * file;
char ch;

int lexan()
{
    while(true)
    {
        char ch = fgetc(file);
        // ignore space and tab
        if (ch == ' ' | ch == '\t') {   // do nothing
        }                               // whitespace is ignored
        else if(ch == '\n')
        {
            numLines++;
        }
        else if (ch = '~') // ignore comments
        {
            while(ch != '\n') //skip over everything in comment line
            {
                ch = fgetc(file);
            }
        }
        else if (isdigit(ch))
        {
            while()
            numLexeme = ch - '0'; // convert to int
            return NUM;
        }
        else if (isalpha(ch))
        {
            int idLexeme = ch;
            char type = lookup(idLexeme);

            if(type == NOT_FOUND)
            {
                insertItem(symbolTable, idLexeme, ch);
                return idLexeme;
            }
            else
                return type;
        }
        else if(ch == EOF)
        {
            return DONE;
        }
        else
        {
            return ch;
        }
    }
}

bool

int lookup(char lexeme) {
    // searchHashTable hashtable for lexeme
    // return type of symbol
    return 0;
}
