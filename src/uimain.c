#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main()
{
  // declaring string
  char str[100];
    printf("Enter a sequence of words:");
    scanf("%[^'\n']s",str);
    printf("%s\n",str);
    printf("I will now split your words up: ");

  return 0;

}
