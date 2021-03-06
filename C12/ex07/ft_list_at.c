#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list)
		return ((void *)0);
	if (!nbr)
		return (begin_list);
	return (ft_list_at(begin_list->next, --nbr));
}
