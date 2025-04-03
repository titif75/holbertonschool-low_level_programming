#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *current;
    int sum = 0;

    /* Initialize current to the head of the list */
    current = head;

    /* Traverse the list and add each node's data to the sum */
    while (current != NULL)
    {
        sum += current->n;
        current = current->next;
    }

    /* Return the sum (will be 0 if the list was empty) */
    return (sum);
}
