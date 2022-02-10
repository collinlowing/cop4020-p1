/***************************************************************
  Student Name: Collin Lowing
  File Name: RDParser.c
  Project 1

  perform lexical analysis on a character string
***************************************************************/

#include "RDParser.h"

int assignStatement()
{
    match(ID);
    if (lookahead != '=')
    {
        printf("error in assignStatement");
        exit(1);
    }
    else
    {
        match(lookahead);
        expression();
        match(':');
    }
}

void expression()
{
    term();
    while(lookahead = '+' || lookahead = '-')
    {
        match(lookahead);
        term();
    }
}

void term()
{
    factor();
    while(lookahead = '*' || lookahead = '/')
    {
        match(lookahead);
        factor();
    }
}

void factor()
{
    if(lookahead == ID)
        match(ID);
    else if(lookahead == NUM)
        match(NUM);
    else if(lookahead = '(')
    {
        match('(');
        expression();
        match(')');
    }
    else
    {
        printf("error in factoring");
        exit(1);
    }
}

void match(char token)
{
    if(lookahead == token)
        lookahead = lexan();
    else
    {
        printf("syntax error");
        exit(1);
    }
}
