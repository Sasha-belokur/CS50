#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[]) 
{

  if(!argv[1]) 
  {
    printf("Required one argument <int>\n");
    return 1;
  }
    int k = atoi(argv[1]);
    
    printf("Give me a sentence");
    string message = GetString();
    printf("ciphertext: ");
    
    char letter;
    
    for (int i = 0, n = strlen(message); i < n; i++)
    {
      letter = message[i];
      if (isalpha(letter))
      {
        if(islower(letter))
        {
          letter = letter - 97;
          letter = (letter + k) % 26;
          letter = letter + 97;
          printf("%c", letter);
        }
        
        if(isupper(letter)) 
        {
          letter = letter - 65;
          letter = (letter + k) % 26;
          letter = letter + 65;
          printf("%c", letter);
        }
      }
    }
    printf("\n");
    return 0;
}