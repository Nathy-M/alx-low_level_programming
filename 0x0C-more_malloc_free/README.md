# 0x0C. C - More malloc, free
This project focuses on using malloc and free for memory allocation, and how to free it.

## Helper File
[_putchar.h](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c): writes a character to stdout.

## Header File
[main.h](https://github.com/Nathy-M/alx-low_level_programming/blob/master/0x0C-more_malloc_free/main.h):_Header file that contains the function prototypes.
Function prototypes and C files are listed in the form of table.

|      File                |          Prototypes                 |
|--------------------------|-----------------------------------  |
|**0-malloc_checked.c**  |  void *malloc_checked(unsigned int b)  |
|**1-string_nconcat.c**  | char *string_nconcat(char *s1, char *s2, unsigned int n)  |
|**2-calloc.c**          | void *_calloc(unsigned int nmemb, unsigned int size)    |
|**3-array_range.c**     | int *array_range(int min, int max)  |
|**100-realloc.c**       |  void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size  |
 File description
0. Trust no one

[0-malloc_checked.c](https://github.com/Nathy-M/alx-low_level_programming/blob/master/0x0C-more_malloc_free/0-malloc_checked.c): Returns a pointer to the allocated memory.if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.

1. String_nconcat

[1-string_nconcat.c](https://github.com/Nathy-M/alx-low_level_programming/blob/master/0x0C-more_malloc_free/1-string_nconcat.c):The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
If the function fails, it should return NULL
If n is greater or equal to the length of s2 then use the entire string s2
if NULL is passed, treat it as an empty string

2. _calloc

[2-calloc.c](https://github.com/Nathy-M/alx-low_level_programming/blob/master/0x0C-more_malloc_free/2-calloc.c):The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL.

3. array_range

[3-array_range.c](https://github.com/Nathy-M/alx-low_level_programming/blob/master/0x0C-more_malloc_free/3-array_range.c): The array created should contain all the values from min (included) to max (included), ordered from min to max
Return: the pointer to the newly created array
If min > max, return NULL
If malloc fails, return NULL.

4. _realloc

[100-realloc.c](https://github.com/Nathy-M/alx-low_level_programming/blob/master/0x0C-more_malloc_free/100-realloc.c): Function that reallocates memory block using malloc and free.

