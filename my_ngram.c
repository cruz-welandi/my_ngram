#include <stdio.h>
#include <string.h>
#include "my_ngram.h"

int main(int arg, char** argv) {

    int index = 1;
    int my_array[150] = {0};

    while(index < arg ) {

         get_char(my_array, argv[index]);

        index++;
    }
 
     count_char(my_array);

return 0;
}
