#include <stdlib.h>
#include "libft.h"

t_list	*ft_create_elem(char *elem)
{
	t_list *list;

	if (!(list = (t_list *)malloc(sizeof(*list))))
		return (NULL);
	if (!(elem))
		list->str = NULL;
	else
	{
//		ft_putstr("\npok\n");
		list->str = ft_strdup(elem);
		list->next = NULL;
	}
	return (list);
}
