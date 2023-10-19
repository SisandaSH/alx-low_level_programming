#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
<<<<<<< HEAD
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
=======
 size_t n = 0;

 while (h)
 {
 n++;
 h = h->next;
 }
 return (n);
>>>>>>> 9b30ec1f79ec3ef9f9d1a3c5321a4b2005ed732a
}
