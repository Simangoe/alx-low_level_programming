Hello

This directory contains work on malloc and free
It contains;

1. 0-create_array.c
    Function that creates an array of chars, and initializes it with a specific char.
    Returns NULL if size = 0
2. 1-strdup.c
    Function that returns a pointer to a newly allocated space in memory,
        which contains a copy of the string given as a parameter.
    Returns NULL if str = NULL.
    On success, the _strdup function returns a pointer to the duplicated string.
    It returns NULL if insufficient memory was available.
3. 3-alloc_grid.c
    Function that returns a pointer to a 2 dimensional array of integers.
    The function should return NULL on failure
    SIf width or height is 0 or negative, return NULL