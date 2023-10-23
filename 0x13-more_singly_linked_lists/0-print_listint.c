#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the first node of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);

        h = h->next;

        node_count++;
    }

    return node_count;
}

int main(void)
{
    listint_t node1 = {1, NULL};
    listint_t node2 = {2, NULL};
    listint_t node3 = {3, NULL};

    node1.next = &node2;
    node2.next = &node3;

    size_t num_nodes = print_listint(&node1);
    printf("Number of nodes: %lu\n", num_nodes);

    return (0);
}

