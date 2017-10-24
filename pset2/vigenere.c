#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[]) 
{

  if(!argv[1] || argc > 2) 
  {
    printf("Required one argument <string>\n");
    return 1;
  }
  
  string key = argv[1];
  for (int i = 0, n = strlen(key); i < n; i++) 
  {
      if (!isalpha(key[i])) return 1;
  }
    
    printf("Give me a sentence: ");
    string message = GetString();
    printf("ciphertext: ");
    
    char letter;
    char k;
    int keylen = strlen(key);
    
    for (int i = 0, j = 0, n = strlen(message); i < n; i++)
    {

      letter = message[i];
      if (isalpha(letter))
      {
          if (islower(key[j]))
            {
                k = (key[j] - 97);
            } else if (isupper(key[j]))
            {
                k = (key[j] - 65);
            }
        
        if (islower(letter))
        {
          letter = letter - 97;
          letter = (letter + k) % 26;
          letter = letter + 97;
          printf("%c", letter);
        }
        
        if (isupper(letter)) 
        {
          letter = letter - 65;
          letter = (letter + k) % 26;
          letter = letter + 65;
          printf("%c", letter);
        }
          j++;
          if (j == keylen) j = 0;
      } 
      else 
      {
          printf("%c", letter);
      }
    }
    
    printf("\n");
    return 0;
}