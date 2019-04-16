/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 18:15:09 by jlange            #+#    #+#             */
/*   Updated: 2019/03/11 16:01:55 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_create_elem(void *content, size_t content_size)
{
	t_list	*elem;

	if ((elem = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	else
	{
		elem->content = content;
		elem->content_size = content_size;
		elem->next = NULL;
	}
	return (elem);
}
