#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
<<<<<<< HEAD
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
=======
 list_t *temp;

 while (head)
 {
 temp = head->next;
 free(head->str);
 free(head);
 head = temp;
 }
>>>>>>> 9b30ec1f79ec3ef9f9d1a3c5321a4b2005ed732a
}
