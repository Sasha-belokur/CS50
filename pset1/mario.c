
/*
    mario.c
    
    This file is a solution of the mario pyramid problem from
    pset1 of CS50.
*/

#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int h;
    string space = " ";
    string hash = "#";
    
    do 
    {
        printf("Enter height please ");
        h = GetInt();
        
        if (h == 0)
        {
            return 0;
        }
        
    } while (h < 1 || h > 23);
    
    for (int i = 0; i < h; i++) 
    {
        for (int j = 0; j < h - 1 -i; j++) 
        {
            printf("%s", space);
        }
        
        for (int y = 0; y < i + 2; y++) 
        {
            printf("%s", hash);
        }
        
        printf("\n");
    }
}