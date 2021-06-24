#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int main(){

  // space_char tests
  printf("%d\n", space_char('a'));// 0
  printf("%d\n", space_char(' ')); // 1


  
  // non_space_char tests
  printf("%d\n", non_space_char('a'));// 1
  printf("%d\n", non_space_char(' ')); // 0



  // *word_start and *word_terminator tests
  char word1[] = " HELLO"; // for word start
  char word2[] = "HELLO "; // for word terminator

  char *ptr = word_start(word1);
  printf("1: %p\n", ptr);
  printf("2: %p\n", &word1[1]);

  char *word = word_terminator(word2);
  printf("1: %p\n", word);
  printf("2: %p\n", &word2[5]);


  
  // *count_words tests
  char word3[] = "HOLA";
  char word4[] = " HOLA";
  char word5[] = "HOLA ";
  char word6[] = "HOLA MUNDO";
  char word7[] = " HOLA MUNDO SOY THOMAS ";

    printf("count_words Test 1: %i\n", count_words(word3));
    printf("count_words Test 2: %i\n", count_words(word4));
    printf("count_words Test 3: %i\n", count_words(word5));
    printf("count_words Test 4: %i\n", count_words(word6));
    printf("count_words Test 5: %i\n", count_words(word7));

    return 0;

}



int space_char(char c){

  int check;

  // True if c is a whitespace character
  if(c == '\t' || c == ' ' || c == '\n'){
    check = 1;
  }

  else{
    check = 0;
  }

  return check;

}



int non_space_char(char c){

  // True if c is a non-whitespace character
  int check;
  
  if(c == '\t' || c == ' ' || c == '\n'){
    check = 0;
  }
  
  else{
    check = 1;
  }
  
  return check;

}



char *word_start(char *str){

  // Iterates through each character of the string until we reach a zero-terminator or
  // the first non-space character is found. If a non-space character is found, its adress is
  // returned.
  for(; *str != '\0'; str++){
    if(non_space_char(*str) == 1){
      printf("First non_space_char: %c\n", *str);
      return str;
    }
  }

  // If the whole string was traversed and no non_space characters were found, returns
  // zero terminator
  return '\0';
  
}





char *word_terminator(char *word){

  // Iterates through each character of the string until we reach a zero-terminator or
  // the first space character is found. If a space character is found, its adress is
  // returned.
  for(; *word != '\0'; word++){
    if(space_char(*word) == 1){
      printf("First space_char: %c\n", *word);
      return word;
    }
  }

  //If the whole string was traversed and no space characters were found, return zero terminator
  return '\0';

}





int count_words(char *str){

  int word_count = 0;
  int word_switch = 0;

  // Traverses the string one char at a time
  for( ; *str != '\0';str++){

    // for loop keeps iterating though a string until a non space character is found.
    // Once a non space character is found, the word switch turns on
    if(non_space_char(*str) == 1){
      word_switch = 1;
    }

    // When there is a space between words, word count is increments and word switch turns off
    if((word_switch == 1) && (space_char(*str) == 1)){
      word_count++;
      word_switch = 0;
    }
  }



  // After the for loop, if word switch is still on, that means it ended on a non space character.
  // This also means it didn't get the chance to increment the word count inside the for loop.
  // This is where word count gets the chance to increment one final time.
  if(word_switch == 1){
    word_count++;
  }



  // Returns the total number of words counted in the function
  return word_count;

}





/* Returns a freshly allocated new zero-terminated string
   containing <len> chars from <inStr> */
char *copy_str(char *inStr, short len);{













}





/* Returns a freshly allocated zero-terminated vector of freshly allocated
   space-separated tokens from zero-terminated str.
   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string"
     tokens[3] = 0
*/

char **tokenize(char* str){

}





/* Prints all tokens. */

void print_tokens(char **tokens){

}





/* Frees all tokens and the vector containing them. */

void free_tokens(char **tokens){

}
