#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the list to free
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current;
    dlistint_t *next;

    current = head;

    /* Traverse the list and free each node */
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
