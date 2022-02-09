/***************************************************************
  Student Name: Collin Lowing
  File Name: LexicalAnalyzer.c
  Project 1

  perform lexical analysis on a character string
***************************************************************/

#include "LexicalAnalyzer.h"

typedef struct HashTable HashTable;

char lookup(int lexeme);

int lexan()
{
    char NOT_FOUND = 404;
    HashTable symbolTable;
    while(true)
    {
        char ch = getchar();
        // ignore space and tab
        if (!(ch == ' ' | ch == '\t'))
        {
            if(ch == '\n')
            {
                //increment line number
            }
            else if (ch = '~') // ignore comments
            {
                // remove line for comment
            }
            else if (isdigit(ch))
            {
                int numLexeme;
                numLexeme = ch - '0'; // convert to int
                return numLexeme;
            }
            else if (isalpha(ch))
            {
                int idLexeme = ch;
                char type = lookup(idLexeme);

                if(type == NOT_FOUND)
                {
                    symbolTable.add(ch);
                    return idLexeme;
                }
                else
                    return type;
            }
            else if(ch == EOF)
                return DONE;
            else
                return ch;
        }
    }
}

char lookup(int lexeme) {
    // searchHashTable hashtable for lexeme
    // return type of symbol
    return 0;
}
