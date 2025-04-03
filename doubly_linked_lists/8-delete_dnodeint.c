#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete (starting from 0)
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    /* Check if list is empty */
    if (*head == NULL)
        return (-1);

    current = *head;

    /* Special case: delete first node */
    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    /* Navigate to the node at the given index */
    for (i = 0; current != NULL && i < index; i++)
        current = current->next;

    /* If we didn't find the node */
    if (current == NULL)
        return (-1);

    /* Update the prev node's next pointer */
    current->prev->next = current->next;

    /* Update the next node's prev pointer if it exists */
    if (current->next != NULL)
        current->next->prev = current->prev;

    /* Free the node */
    free(current);

    return (1);
}
