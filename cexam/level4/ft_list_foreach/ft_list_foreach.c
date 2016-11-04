#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (begin_list == 0)
		return ;
	t_list *curr = begin_list;
	while (curr)
	{
		(*f)(curr->data);
		curr = curr->next;
	}
}