#include "sort.h"
#include <ctype.h>  

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
//Starter med at lave en midlertidig variabel til at gemme værdien af den første char.
//Efterfølgende tildeles værdien af den anden char til den første char.

bool letters_in_order(char a, char b) {
    return tolower(a) <= tolower(b);
}
//Sammenligner to bogstaver uden at tage hensyn til store og små bogstaver.

bool numbers_in_ascending_order(char a, char b) {
    return a <= b;
}
//Sammenligner to tal for at afgøre, om de er i stigende rækkefølge.

void bubble_sort(char arr[], int n, pair_is_in_order cmp) {
    int swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        //Starter bubble sort algoritmen.
        //Tjekker om der blev byttet i løbet af gennemløbet.
        for (int j = 0; j < n - i - 1; j++) {
            if (!cmp(arr[j], arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        //sammenligner alle par af elementer i arrayet
        if (!swapped)
            break;
            //Hvis der ikke blev byttet, er den færdig med at sortere og afslutter.
    }
}
