#ifndef SORT_H
#define SORT_H

#include <stdbool.h>

typedef bool (*pair_is_in_order)(char a, char b);
//Laver et alias for en funktionspointer, som peger på en funktion, der tager to char-argumenter og returnerer en bool.

void swap(char *a, char *b);
//Bytter værdierne af to char-variabler.

bool letters_in_order(char a, char b); //funktion til at sammenligne bogstaver
bool numbers_in_ascending_order(char a, char b); //funktion til at sammenligne tal

void bubble_sort(char arr[], int n, pair_is_in_order cmp); 
//Tager et array, dets længde og en funktionspointer som bestemmer sorteringskriteriet.

#endif
//Afslutter header guard'en for at forhindre multiple inkluderinger af denne header-fil.