#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node;
    dlistint_t *current;
    unsigned int i;

    /* Special case: insert at the beginning of the list */
    if (idx == 0)
        return (add_dnodeint(h, n));

    /* If list is empty and index is not 0, we can't insert */
    if (*h == NULL && idx > 0)
        return (NULL);

    current = *h;
    i = 0;

    /* Traverse to the position just before the insertion point */
    while (current != NULL && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    /* If we reached the end of the list before finding position */
    if (current == NULL)
        return (NULL);

    /* Special case: insert at the end of the list */
    if (current->next == NULL)
        return (add_dnodeint_end(h, n));

    /* Create the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    /* Set up the new node */
    new_node->n = n;
    new_node->prev = current;
    new_node->next = current->next;

    /* Update the next node's prev pointer */
    current->next->prev = new_node;

    /* Update the current node's next pointer */
    current->next = new_node;

    return (new_node);
}
