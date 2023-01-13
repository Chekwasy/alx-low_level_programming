#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hex
 * @buffer: the address of memory to print
 * @size: the size of the
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
 {
	 void *pt;

	 if (old_size == new_size)
		 return (ptr);
	 if (new_size == 0 && ptr != NULL)
	 {
		 free(ptr);
		 return(NULL);
	 }
	 pt = realloc(ptr, new_size);
	 if (pt == NULL)
		 return (NULL);
	 return (pt);
 }
