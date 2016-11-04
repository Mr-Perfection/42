#include "list.h"

void swap(t_list* p1, t_list *p2)
{
	int temp = p1->data;
	p1->data = p2->data;
	p2->data = temp;
}
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *curr = lst;
	t_list *node = 0;
	t_list *temp = 0;

	while(curr->next)
	{
		node = curr;
		temp = curr->next;
		while(temp)
		{
			/*get the minimum value that is less than current.*/
			if (cmp(temp->data, node->data))
				node = temp;
			temp = temp->next;
		}
		swap(curr, node);
		curr = curr->next;
	}
	return (lst);
}
