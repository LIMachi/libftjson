/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_json_search_index_in_array.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:01:43 by hmartzol          #+#    #+#             */
/*   Updated: 2018/09/19 14:01:44 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftjson.h>
#include <stdlib.h>

t_json_value	*ft_json_search_index_in_array(t_json_value *value,
												unsigned long index)
{
	t_json_array	*ar;

	if (!ft_json_test_type(value, array))
		return (NULL);
	ar = (t_json_array*)value->ptr;
	if (index >= ar->nb_values)
		return (NULL);
	return (ar->value[index]);
}
