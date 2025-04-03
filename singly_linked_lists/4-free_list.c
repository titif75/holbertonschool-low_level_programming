#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *current;
list_t *next;
current = head;
while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}
