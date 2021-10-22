#include <cstddef>
#include <time.h>
#include <stdlib.h>

typedef struct {
    int* array;
    int last;
    int size;
}Array;

int* RandomArray(int min, int max)
{
    srand(time(NULL));
    return NULL;
}