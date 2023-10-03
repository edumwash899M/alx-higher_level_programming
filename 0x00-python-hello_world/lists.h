#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

// Define a structure for a singly linked list node
typedef struct listint_s
{
	int n;                  // Integer data
	struct listint_s *next; // Pointer to the next node
} listint_t;

// Function prototypes
size_t print_listint(const listint_t *h);                // Print the elements of a linked list
listint_t *add_nodeint(listint_t **head, const int n);   // Add a new node to the beginning of the linked list
void free_listint(listint_t *head);                     // Free the memory allocated for a linked list
int check_cycle(listint_t *list);                       // Check if there is a cycle in the linked list

#endif /* LISTS_H */

