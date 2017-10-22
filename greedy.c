/*
    greedy.c
    
    This file is a solution of the greedy algorithm problem from
    pset1 of CS50.
*/

#include <cs50.h>
#include <stdio.h>

int main (void) {
  float change;
  int cents;
  int coins = 0; 

  do {
    printf("Hello, how much change is owned? ");
    change = GetFloat();
  } while (change < 0);
  
  cents = change * 1000 / 10;

  if (cents >= 25) {
    int amount = cents / 25;

    cents = cents % 25;

    coins += amount;
  }

  if (cents >= 10) {
    int amount = cents / 10;

    cents = cents % 10;

    coins += amount;
  }

  if (cents >=  5) {
    int amount = cents / 5;

    cents = cents % 5;

    coins += amount;
  }

  if (cents >= 1) {
    int amount = cents / 1;

    coins += amount;
  }

  printf("%d\n", coins);
} 