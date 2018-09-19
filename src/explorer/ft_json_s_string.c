/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_json_s_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:01:33 by hmartzol          #+#    #+#             */
/*   Updated: 2018/09/19 14:01:34 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftjson.h>
#include <libft.h>

t_json_string	ft_json_s_string(char *str)
{
	if (str == NULL)
		return ((t_json_string){.length = 0, .ptr = NULL});
	return ((t_json_string){.length = ft_strlen(str), .ptr = str});
}
