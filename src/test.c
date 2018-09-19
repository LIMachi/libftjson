/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:50:11 by hmartzol          #+#    #+#             */
/*   Updated: 2018/09/19 15:29:52 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftjson.h>
#include <unistd.h>

void	test_string_ok(char *str, char *expected)
{
	size_t	p;

	p = 0;
	while (str[p] != '\0' && expected[p] != '\0'
			&& str[p] == expected[p])
		++p;
	if (str[p] != expected[p])
		write(2, "unexpected string value\n", 24);
}

int		main(const int argc, const char **argv)
{
	t_json_value		*root;
	int					int_;
	int					bool_;

	write(1, "expected:\n{\n\t\"a\": [1, true],\n\t\"b\": \"ok\"\n}\n", 42);
	if (argc != 2)
	{
		write(1, "at least try to give some argumment :)\n", 39);
		return (0);
	}
	root = ft_json_parse_src(argv[1]);
	if (ft_json_accesses(root, "ro>a>i*<a>b*ro>s#",
		"a", 0, &int_, 1, &bool_,
		"b", test_string_ok, "ok"))
		write(2, "error on accesses\n", 18);
	if (int_ != 1)
		write(2, "unexpected int value\n", 21);
	if (bool_ != 1)
		write(2, "unexpected bool value\n", 22);
	write(1, "got:\n", 5);
	ft_json_print(1, root);
	return (0);
}
