#include "random.h"

void rand_string(char *s, size_t size) {

    // iterate through each character
    for (int i = 0; i < size; i++) {
        // create a random lowercase char using 'a' as the offset.
        *(s + i) = 'a' + rand() % 26;
    }
}
