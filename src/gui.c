#include <stdio.h>
#include <stdlib.h>
#include "tokenizer"
#include "tokenizer.c"

void main(){

  //Print out indicator
  printf("> ");

  char c;

  //Reads on char at a time from user input and prints them.
  //This goes on until you press enter and create a new line.
  while((c = getchar()) != '\n'){
    putchar(c);
  }

  printf("\n");

}
