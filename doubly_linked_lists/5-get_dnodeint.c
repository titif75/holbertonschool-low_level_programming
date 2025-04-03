#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return, starting from 0
 *
 * Return: The nth node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current;
    unsigned int count;

    /* Initialize variables */
    current = head;
    count = 0;

    /* Traverse the list until we reach the desired index */
    while (current != NULL)
    {
        if (count == index)
            return (current);
        
        current = current->next;
        count++;
    }

    /* If we get here, the node at the specified index doesn't exist */
    return (NULL);
}
