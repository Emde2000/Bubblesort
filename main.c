#include <stdio.h>
#include "sort.h"

int main() {
    char letter_arr1[] = {'z', 'S', 's', 'a'};
    char number_arr1[] = {4, -1, 2, 9};
    //Opretter to arrays: et med bogstaver og et med tal.

    int len_letters = sizeof(letter_arr1) / sizeof(letter_arr1[0]);
    int len_numbers = sizeof(number_arr1) / sizeof(number_arr1[0]);
    //Beregner længden af begge arrays.

    bubble_sort(letter_arr1, len_letters, letters_in_order);
    printf("Sorted letters: ");
    for (int i = 0; i < len_letters; i++)
        printf("%c ", letter_arr1[i]);
    printf("\n");
    //Printer det sorterede bogstavsarray.

    bubble_sort(number_arr1, len_numbers, numbers_in_ascending_order);
    printf("Sorted numbers: ");
    for (int i = 0; i < len_numbers; i++)
        printf("%d ", number_arr1[i]);
    printf("\n");
    //Printer det sorterede talarray.

    return 0;
    //Afslutter main-funktionen og retunerer til 0 for at indikere succes.
}
