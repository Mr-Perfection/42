#include "ft_list.h"
int	ft_list_size(t_list *begin_list)
{
	t_list *curr = begin_list;
	if (curr == 0)
		return (0);
	int count = 1;
	while (curr->next != 0)
	{
		count += 1;
		curr = curr->next;
	}
	return (count);
}