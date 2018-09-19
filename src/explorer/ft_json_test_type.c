/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_json_test_type.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:02:03 by hmartzol          #+#    #+#             */
/*   Updated: 2018/09/19 14:02:13 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftjson.h>
#include <stdlib.h>

int	ft_json_test_type(const t_json_value *value, const t_json_value_type type)
{
	if (value == NULL || !(value->type & type) || value->parent == NULL)
		return (0);
	if ((value->type & (array | object | string)) && value->ptr == NULL)
		return (0);
	if (value->type & boolean && *(int*)value->ptr & ~1)
		return (0);
	if (value->type & null && value->ptr != NULL)
		return (0);
	return (1);
}
