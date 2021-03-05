
#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int space_char(char c){
  if (c==' '||c=='\t'){
    //printf(" is a space_char\n");
    return 1;
  }
  else{
    //printf(" is NOT a space_char\n");
    return 0;
  }
}//end of space char

int non_space_char(char c){
  if (c!=' '&&c!='\t'){
    //printf(" is a non_space_char\n");
    return 1;
  }
  else{
    //printf(" is NOT a non_space_char\n");
    return 0;
  }
}//end of non space char

char word_start(char *str){

  for (int i=0; str[i]!='\0';i++){
    if (space_char(str[0])==1)
      *str = ++str;

    else if (non_space_char(str[0]==1))
      *str=NULL;

  }
  return *str;
}//end of word_start

int count_words(char *str){
  int space = 0;
  int word = 1;
  int state = space; //Indicates if currently traversing a space or word
  int wc = 0;  // word count
  // Scan all characters one by one
  while (*str)
    {
      // If next character is a whitespace char, state = space
      if (*str==' '||*str=='\t')
	state = space;

      // If next character is a non_space_char and
      // state is space, then set the state as IN and
      // increment word count
      else if (state == space)
	{
	  state = word;
	  ++wc;
	}
      // Move to next character
      ++str;
    }
  return wc;
}//end of count_words

char *word_terminator(char *word){

}

char *copy_str(char *inStr, short len){

}

char **tokenize(char* str){

}

void print_tokens(char **tokens){

}

void free_tokens(char **tokens){

}
