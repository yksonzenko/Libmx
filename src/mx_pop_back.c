#include "libmx.h"

void mx_pop_back(t_list **head) {
	t_list *clone = NULL;

	if (!head || !*head)
		return;
	if ((*head)->next == NULL) {
		free(*head);
		*head = NULL;
	}
	else {
		clone = *head;
		while (clone && clone->next->next != NULL) {
			clone = clone->next;
		}
		free(clone->next);
		clone->next = NULL;
	}
}
