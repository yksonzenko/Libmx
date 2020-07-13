#include "libmx.h"

void mx_pop_front(t_list **head) {
	t_list *clone = NULL;

	if (!head || !*head)
		return;
	if ((*head)->next == NULL) {
		free(*head);
		*head = NULL;
	}
	else {
		clone = (*head)->next;
		free(*head);
		*head = clone;
	}
}
