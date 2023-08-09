#ifndef MY_NGRAM_H
#define MY_NGRAM_H
#include <stdio.h>

void get_char(int* array_int, const char* value) {
    int i = 0;
    while (value[i] != '\0') {
        array_int[(unsigned char)value[i]]++; // Utiliser unsigned char pour les valeurs négatives
        i++;
    }
}

void count_char(const int* array) {
    for (int i = 0; i < 150; i++) {
        if (array[i] > 0) {
            printf("%c:%d\n", (char)i, array[i]);
        }
    }
}

#endif